#include "udp.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define IP "192.168.0.1"

float integral;
float prev_error;

void start_simulation()
{
	UDPConn* conn = udpconn_new(IP, 9999);
    
  char sendBuf[64];  

  sprintf(sendBuf, "START");    
  udpconn_send(conn, sendBuf);
  
  udpconn_delete(conn);
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

	printf("buffer: %s\n\r", recvBuf);

	//memmove(recvBuf, recvBuf+8, strlen(recvBuf));
	//printf("newMessage: {%s}\n\r", recvBuf);
	y = (float) atof(recvBuf + 8); 

	/*char * separator = ":";
	char * b = strtok(recvBuf, separator);
	printf("newMessage: {%s}\n\r", recvBuf);
	printf("B: {%s}\n\r", b);
	y = atof(recvBuf);*/

	printf("Y: %f\n\r", y);
  
  udpconn_delete(conn);

	return y;
}

void set_u(float u)
{
	UDPConn* conn = udpconn_new(IP, 9999);
    
  char sendBuf[64]; 

	char command[20];

	snprintf(command, sizeof(command), "SET:%.6f", u);
	printf("SET U: %s\n\r", command);

  sprintf(sendBuf, command);    
  udpconn_send(conn, sendBuf);
  
  udpconn_delete(conn);
}

float controller (float set_point)
{
	float Kp = 10;
	float Ki = 800;	
	float y;
	float dt = 0.001;	
	float u; 
	float error;

	
	y = get_y();

	error = set_point - y;
	integral += error * dt;
	//float derivative  = (error - prev_error) / dt;
	prev_error  = error;

	printf("Error: %f | integral: %f | dt: %f", error, integral, dt);    

	u = Kp * error + Ki * integral;

	printf("Y: %f | u: %f\n\r", y, u);

	//u = Kp * error + Ki * integral + Kd * derivative;
	set_u(u);
	return y;

}


int main ()
{
	integral = 0;
	prev_error = 0;
	printf("Hello controller\n\r");
	start_simulation();
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);
	controller(1);

	stop_simulation();
	return 0;
}