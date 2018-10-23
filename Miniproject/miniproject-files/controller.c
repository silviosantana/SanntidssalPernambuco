#include <stdio.h>


float integral;
float prev_error;

void controller ()
{
	float set_point;
	float dt;	
	float u; 

	float error = set_point - y;
	integral += error * dt;
	float derivative  = (error - prev_error) / dt;
	prev_error  = error;    

	u = Kp * error + Ki * integral + Kd * derivative;
}


int main ()
{
	integral = 0;
	prev_error = 0;
	printf("Halo Dino");
	return 0;
}
