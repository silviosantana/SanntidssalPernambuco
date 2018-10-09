#include <stdio.h>
#include <unistd.h>
#include <native/task.h>
#include <native/timer.h>
#include <native/sem.h>
#include <sys/mman.h>
#include <rtdk.h>
#include <sched.h>


RT_TASK task1;
RT_TASK task2;
RT_SEM semaphore;

void task(void* argp)
{
	int id = (size_t)argp;	
	rt_sem_p(&semaphore, TM_INFINITE);
	rt_printf("Hi! I'm task %d\n", id);
	rt_sem_v(&semaphore);
}

int main()
{
	mlockall(MCL_CURRENT | MCL_FUTURE);
	rt_print_auto_init(1);
	
	rt_sem_create 	(&semaphore, "patience", 1, S_FIFO);

	rt_task_shadow (NULL, "Main task", 3, T_CPU(0));

	rt_task_create(&task1, "Task1", 0, 1, T_CPU(0));
	rt_task_start(&task1, &task, (void*)1);

	rt_task_create(&task2, "Task2", 0, 2, T_CPU(0));
	rt_task_start(&task2, &task, (void*)2);

	rt_timer_spin(100000000);

	rt_sem_broadcast(&semaphore); 	

	rt_timer_spin(100000000);

	rt_sem_delete(&semaphore);

	return 0;
}
