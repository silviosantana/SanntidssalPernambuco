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
float dt = 0.0035;	
float u; 
float error;
int i;
struct timespec t;
struct timespec sleep_time;
struct timespec now;
struct timespec then;
UDPConn* conn;
pthread_mutex_t mymutex;

void start_simulation()
{

    
  char sendBuf[64];  

  sprintf(sendBuf, "START");    
  pthread_mutex_lock(&mymutex);
  udpconn_send(conn, sendBuf);
  pthread_mutex_unlock(&mymutex);
  

	//printf("Started 
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

float get_y ()
{

    
  char sendBuf[64];
  char recvBuf[64]; 
	float y;
   
  memset(recvBuf, 0, sizeof(recvBuf));

  sprintf(sendBuf, "GET"); 
  pthread_mutex_lock(&mymutex);   
  udpconn_send(conn, sendBuf);

  
  udpconn_receive(conn, recvBuf, sizeof(recvBuf));
	pthread_mutex_unlock(&mymutex);
	y = (float) atof(recvBuf + 8); 
  


	return y;
}

void set_u(float u)
{

    
  char sendBuf[64]; 

	char command[20];

	snprintf(command, sizeof(command), "SET:%.6f", u);
	//printf("SET U: %s\n\r", command);

  sprintf(sendBuf, command);
	pthread_mutex_lock(&mymutex);    
  udpconn_send(conn, sendBuf);
  pthread_mutex_unlock(&mymutex);
  

}

float controller (float set_point)
{
	//printf("Hello controller\n\r");
	i = 0;
  clock_gettime(CLOCK_MONOTONIC, &now);
  then = timespec_add(now, t);

	struct timespec wake_time;
  clock_gettime(CLOCK_MONOTONIC, &wake_time);

	while(timespec_cmp(now, then) < 0){
		y = get_y();

		error = set_point - y;
		integral += error * dt;
		//derivative  = (error - prev_error) / dt;
		prev_error  = error;

		u = Kp * error + Ki * integral;
		set_u(u);

		//clock_nanosleep(CLOCK_MONOTONIC, 0, &sleep_time, NULL);
		wake_time = timespec_add(wake_time, (struct timespec){0, 3*1000*1000});
		//clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &wake_time, NULL);
		//busy_wait(sleep_time);
		clock_gettime(CLOCK_MONOTONIC, &now);
		++i;
  }
	
	printf("%d\n", i);
	return y;

}

void *system_controller()
{
	integral = 0;
	prev_error = 0;	

	t.tv_sec = 1;
	t.tv_nsec = 0;

	sleep_time.tv_sec = 0;
	sleep_time.tv_nsec = 3000000;


	
  controller(1);
	controller(0);
	
}

void* respond_to_signal(/*recvBuf*/)
{
  char sendBuf[64];
	char recvBuf[64]; 
	float y;

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
		}
	  pthread_mutex_unlock(&mymutex);
	}

}


int main ()
{
	pthread_t ctrl_thread;
	pthread_t signal_responder;
	pthread_mutex_init(&mymutex, NULL);
	conn = udpconn_new(IP, 9999);
	start_simulation();
	pthread_create(&ctrl_thread, NULL, system_controller, NULL);	
	pthread_create(&signal_responder, NULL, respond_to_signal, NULL);	
	
	pthread_join(ctrl_thread, NULL);
	//pthread_join(signal_responder, NULL);
	stop_simulation();
	udpconn_delete(conn);
	pthread_mutex_destroy(&mymutex);
	return 0;
}









