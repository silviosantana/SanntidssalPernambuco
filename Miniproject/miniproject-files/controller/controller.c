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


void start_simulation()
{
	UDPConn* conn = udpconn_new(IP, 9999);
    
  char sendBuf[64];  

  sprintf(sendBuf, "START");    
  udpconn_send(conn, sendBuf);
  
  udpconn_delete(conn);
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
	UDPConn* conn = udpconn_new(IP, 9999);
    
  char sendBuf[64];  

  sprintf(sendBuf, "STOP");    
  udpconn_send(conn, sendBuf);
  
  udpconn_delete(conn);
}

float get_y ()
{
	UDPConn* conn = udpconn_new(IP, 9999);
    
  char sendBuf[64];
  char recvBuf[64]; 
	float y;
   
  memset(recvBuf, 0, sizeof(recvBuf));
  
  sprintf(sendBuf, "GET");    
  udpconn_send(conn, sendBuf);
  
  udpconn_receive(conn, recvBuf, sizeof(recvBuf));
	y = (float) atof(recvBuf + 8); 
  
  udpconn_delete(conn);

	return y;
}

void set_u(float u)
{
	UDPConn* conn = udpconn_new(IP, 9999);
    
  char sendBuf[64]; 

	char command[20];

	snprintf(command, sizeof(command), "SET:%.6f", u);
	//printf("SET U: %s\n\r", command);

  sprintf(sendBuf, command);    
  udpconn_send(conn, sendBuf);
  
  udpconn_delete(conn);
}

float controller (float set_point)
{
	//printf("Hello controller\n\r");
	i = 0;
  clock_gettime(CLOCK_MONOTONIC, &now);
  then = timespec_add(now, t);

	while(timespec_cmp(now, then) < 0){
		y = get_y();

		error = set_point - y;
		integral += error * dt;
		//derivative  = (error - prev_error) / dt;
		prev_error  = error;

		u = Kp * error + Ki * integral;
		set_u(u);

		//clock_nanosleep(CLOCK_MONOTONIC, 0, &sleep_time, NULL);
		busy_wait(sleep_time);
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
	sleep_time.tv_nsec = 2000000;


	start_simulation();
  controller(1);
	controller(0);
	stop_simulation();
}


int main ()
{
	pthread_t ctrl_thread;
	pthread_create(&ctrl_thread, NULL, system_controller, NULL);
	
	pthread_join(ctrl_thread, NULL);	
	return 0;
}









