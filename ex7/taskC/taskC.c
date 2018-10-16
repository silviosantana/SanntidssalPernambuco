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
RT_TASK task3;
RT_SEM semaphore;
RT_SEM sync1;
RT_MUTEX mutex;

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
	rt_mutex_acquire(&mutex,TM_INFINITE);
	rt_printf("Task LOW starting busy wait\n");
	busy_wait_us(3*1000);
	rt_printf("Task LOW ending busy wait\n");
	rt_mutex_release(&mutex);

}

void medium(void* argp)
{
	rt_sem_p(&sync1, TM_INFINITE);	
	rt_task_sleep(1000*1000);
	rt_printf("Task MEDIUM starting busy wait\n");
	busy_wait_us(5*1000);
	rt_printf("Task MEDIUM ending busy wait\n");
}

void high(void* argp)
{
	rt_sem_p(&sync1, TM_INFINITE);
	rt_task_sleep(2000*1000);
	rt_mutex_acquire(&mutex,TM_INFINITE);
	rt_printf("Task HIGH starting busy wait\n");
	busy_wait_us(2*1000);
	rt_printf("Task HIGH ending busy wait\n");
	rt_mutex_release(&mutex);	
}

int main()
{
	mlockall(MCL_CURRENT | MCL_FUTURE);
	rt_print_auto_init(1);
	
	rt_mutex_create(&mutex,"MyMutex");
	rt_sem_create 	(&sync1, "sync", 0, S_FIFO);

	rt_task_shadow (NULL, "Main task", 4, T_CPU(0));

	rt_task_create(&task1, "Low", 0, 1, T_CPU(0));
	rt_task_create(&task2, "Medium", 0, 2, T_CPU(0));

	rt_task_start(&task1, &low, (void*)1);
	rt_task_start(&task2, &medium, (void*)2);

	rt_task_create(&task3, "High", 0, 3, T_CPU(0));
	rt_task_start(&task3, &high, (void*)3);

	rt_task_sleep(100000000);

	rt_sem_broadcast(&sync1); 

	rt_task_sleep(100000000);	

	while(1);

	rt_sem_delete(&sync1);

	return 0;
}