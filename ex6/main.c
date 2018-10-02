#include <stdio.h>
#include "io.h"
#include <unistd.h>
#include <native/task.h>
#include <native/timer.h>
#include <sys/mman.h>
#include <rtdk.h>
#include <sched.h>
#include <pthread.h>

RT_TASK dummy;
RT_TASK response1;
RT_TASK response2;
RT_TASK response3;


int set_cpu(int cpu_number){
	cpu_set_t cpu;
	CPU_ZERO(&cpu);
	CPU_SET(cpu_number, &cpu);

	return pthread_setaffinity_np(pthread_self(), sizeof(cpu_set_t), &cpu);
}

void dummy_task ()
{
	rt_task_set_periodic(&dummy, TM_NOW, 1000000000);
	while(1)
	{
		printf("HUE\n");
		rt_task_wait_period(NULL);
	}
}

void *disturbe(void* argp)
{
	set_cpu(0);    
	while(1);
}

void response_task (void* argp)
{
	int channel = (size_t)argp;	
	rt_task_set_periodic(&dummy, TM_NOW, 1000000);
	unsigned long duration = 100000000000;  // 10 second timeout	
	unsigned long endTime = rt_timer_read() + duration;

	while(1)
	{
		if (io_read(channel) == 0)
        {
            io_write(channel, 0);
            rt_timer_spin(5000);
            //rt_printf("channel %d responded\n", channel);
            io_write(channel, 1);
        }
		if(rt_timer_read() > endTime){
        rt_printf("Time expired\n");
        rt_task_delete(NULL);
    }
    if(rt_task_yield()){
        rt_printf("Task failed to yield\n");
        rt_task_delete(NULL);
    }
		rt_task_wait_period(NULL);
	}
}

int main ()
{
	mlockall(MCL_CURRENT | MCL_FUTURE);
  rt_print_auto_init(1);
	
	io_init();

	pthread_t disturbance[10];

  for (int i = 0; i < 10 ; i++)
  {
      pthread_create(&disturbance[i], NULL, disturbe, NULL);
  }	

	int err = 0;

	rt_task_create(&response1, "Response1", 0, 50, T_CPU(0));
	err = rt_task_start(&response1, &response_task, (void*)1);

	rt_task_create(&response2, "Response2", 0, 50, T_CPU(0));
	err = rt_task_start(&response2, &response_task, (void*)2);

	rt_task_create(&response3, "Response3", 0, 50, T_CPU(0));
	err = rt_task_start(&response3, &response_task, (void*)3);
	

	while(1);
	return 0;
}
