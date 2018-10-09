#include <stdio.h>
#include <unistd.h>
#include <native/task.h>
#include <native/timer.h>
#include <native/sem.h>
#include <native/mutex.h>
#include <sys/mman.h>
#include <rtdk.h>
#include <sched.h>


RT_TASK task1;
RT_TASK task2;
RT_SEM semaphore;
RT_SEM sync1;
RT_MUTEX mutexA;
RT_MUTEX mutexB;

void busy_wait_us(unsigned long delay)
{
	for(; delay > 0; delay--)
	{
		rt_timer_spin(1000);
	}
}

void low(void* argp)
{
	rt_sem_p(&sync1, TM_INFINITE);	

	rt_mutex_acquire(&mutexA,TM_INFINITE);

	rt_task_set_priority(&task1, 50);

	rt_printf("Task LOW took A\n");
	busy_wait_us(3*1000);
	rt_printf("Task LOW ending A busy wait\n");

	rt_mutex_acquire(&mutexB,TM_INFINITE);
	rt_printf("Task LOW took B\n");
	busy_wait_us(3*1000);
	rt_printf("Task LOW ending B busy wait\n");

	rt_printf("Task LOW return A and B\n");
	rt_mutex_release(&mutexB);
	rt_mutex_release(&mutexA);

	rt_task_set_priority(&task1, 1);

	busy_wait_us(1*1000);
	rt_printf("Task LOW ending busy wait\n");
}


void high(void* argp)
{
	rt_sem_p(&sync1, TM_INFINITE);
	
	rt_task_sleep(1000*1000);
	rt_mutex_acquire(&mutexB,TM_INFINITE);

	rt_task_set_priority(&task2, 50);

	rt_printf("Task HIGH took B\n");
	busy_wait_us(1*1000);
	rt_printf("Task HIGH ending B busy wait\n");

	rt_mutex_acquire(&mutexA,TM_INFINITE);
	rt_printf("Task HIGH took A\n");
	busy_wait_us(2*1000);
	rt_printf("Task HIGH ending A busy wait\n");
	
	rt_printf("Task HIGH return A and B\n");
	rt_mutex_release(&mutexA);
	rt_mutex_release(&mutexB);

	rt_task_set_priority(&task2, 3);


	busy_wait_us(1*1000);
	rt_printf("Task HIGH ending busy wait\n");	
}

int main()
{
	mlockall(MCL_CURRENT | MCL_FUTURE);
	rt_print_auto_init(1);
	
	rt_mutex_create(&mutexA,"MyMutexA");
	rt_mutex_create(&mutexB,"MyMutexB");
	rt_sem_create 	(&sync1, "sync", 0, S_FIFO);

	rt_task_shadow (NULL, "Main task", 4, T_CPU(0));

	rt_task_create(&task1, "Low", 0, 1, T_CPU(0));
	rt_task_create(&task2, "High", 0, 3, T_CPU(0));

	rt_task_start(&task1, &low, (void*)1);
	rt_task_start(&task2, &high, (void*)3);

	rt_task_sleep(100000000);

	rt_sem_broadcast(&sync1); 

	rt_task_sleep(100000000);	

	while(1);

	rt_sem_delete(&sync1);

	return 0;
}
