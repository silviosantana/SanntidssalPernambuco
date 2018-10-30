#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include "udp.h"
#include "time.h"
#define IP "192.168.0.1"

float integral;
float prev_error;
float Kp = 2.855;
float Ki = 1471;	
//float Kd = 0.01708;
float derivative;
float y;
float dt = 0.005;	
float u; 
float error;
int i;
struct timespec t;
struct timespec sleep_time;
struct timespec now;
struct timespec then;
float set_point;

UDPConn* conn;
pthread_mutex_t mymutex;
pthread_mutex_t mutex_sp;

void start_simulation()
{ 
  char sendBuf[64];  

  sprintf(sendBuf, "START");    
  pthread_mutex_lock(&mymutex);
  udpconn_send(conn, sendBuf);
  pthread_mutex_unlock(&mymutex);
}

void busy_wait(struct timespec t){
    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC, &now);
    struct timespec then = timespec_add(now, t);
    int i;
    while(timespec_cmp(now, then) < 0){
        for(i = 0; i < 1000; i++){}
        clock_gettime(CLOCK_MONOTONIC, &now);
    }
}

void stop_simulation()
{
  char sendBuf[64];  

  sprintf(sendBuf, "STOP");
  pthread_mutex_lock(&mymutex);    
  udpconn_send(conn, sendBuf);
  pthread_mutex_unlock(&mymutex);
}

void send_get_y ()
{
	char sendBuf[64];

  sprintf(sendBuf, "GET"); 
  pthread_mutex_lock(&mymutex);   
  udpconn_send(conn, sendBuf);
	pthread_mutex_unlock(&mymutex); 
}

void set_u(float y)
{
  char sendBuf[64]; 
	char command[20];

	pthread_mutex_lock(&mutex_sp);
	error = set_point - y;
	pthread_mutex_unlock(&mutex_sp);	

	integral += error * dt;
	derivative  = (error - prev_error) / dt;
	prev_error  = error;

	u = Kp * error + Ki * integral;

	snprintf(command, sizeof(command), "SET:%.6f", u);
	//printf("SET U: %s\n\r", command);
	
  sprintf(sendBuf, command);   
  udpconn_send(conn, sendBuf);
  
}

float controller ()
{
	//i = 0;
  clock_gettime(CLOCK_MONOTONIC, &now);
  then = timespec_add(now, t);

	struct timespec wake_time;
  clock_gettime(CLOCK_MONOTONIC, &wake_time);

	while(timespec_cmp(now, then) < 0){
		send_get_y();

		//clock_nanosleep(CLOCK_MONOTONIC, 0, &sleep_time, NULL);
		wake_time = timespec_add(wake_time, (struct timespec){0, 5*1000*1000});
		clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &wake_time, NULL);
		//busy_wait(sleep_time);
		clock_gettime(CLOCK_MONOTONIC, &now);
		++i;
  }
	
	//printf("%d\n", i);
	return y;

}

void *system_controller()
{
	integral = 0;
	prev_error = 0;	

	t.tv_sec = 1;
	t.tv_nsec = 0;

	sleep_time.tv_sec = 0;
	sleep_time.tv_nsec = 1000000; 
	
	pthread_mutex_lock(&mutex_sp);
	set_point = 1;
	pthread_mutex_unlock(&mutex_sp);
  controller();
	pthread_mutex_lock(&mutex_sp);
	set_point = 0;
	pthread_mutex_unlock(&mutex_sp);
	controller();
	
}

void* respond_to_network(/*recvBuf*/)
{
  char sendBuf[64];
	char recvBuf[64]; 

	pthread_mutex_lock(&mymutex);
	udpconn_send(conn, "START"); 
	pthread_mutex_unlock(&mymutex);
	while(1)
	{
		pthread_mutex_lock(&mymutex);
		udpconn_receive(conn, recvBuf, sizeof(recvBuf));
		if (strcmp(recvBuf, "SIGNAL") == 0)
		{
			//printf("GOT A SIGNAL\n\r");			
			char sendBuf[64];
			sprintf(sendBuf, "SIGNAL_ACK"); 
			udpconn_send(conn, sendBuf);
		}else 
		{
			y = (float) atof(recvBuf + 8);
			set_u(y);		
		}
	  pthread_mutex_unlock(&mymutex);
	}

}

int main ()
{
	pthread_t ctrl_thread;
	pthread_t signal_responder;

	pthread_mutex_init(&mymutex, NULL);
	pthread_mutex_init(&mutex_sp, NULL);

	conn = udpconn_new(IP, 9999);

	start_simulation();

	pthread_create(&ctrl_thread, NULL, system_controller, NULL);	
	pthread_create(&signal_responder, NULL, respond_to_network, NULL);	
	
	pthread_join(ctrl_thread, NULL);
	//pthread_join(signal_responder, NULL);

	stop_simulation();
	udpconn_delete(conn);
	pthread_mutex_destroy(&mymutex);
	pthread_mutex_destroy(&mutex_sp);
	return 0;
}









