#define _GNU_SOURCE

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sched.h>

#include "io.h"

/// Assigning CPU core ///

int set_cpu(int cpu_number){
	cpu_set_t cpu;
	CPU_ZERO(&cpu);
	CPU_SET(cpu_number, &cpu);

	return pthread_setaffinity_np(pthread_self(), sizeof(cpu_set_t), &cpu);
}

void *disturbe(void* argp)
{
    while(1);
}

void *respond(void* argp){
    int channel = (size_t)argp;
    printf("started response task with channel %d\n", channel);
    set_cpu(1);
	while (1){
        if (io_read(channel) == 0)
        {
            io_write(channel, 0);
            usleep(5);
            //printf("channel %d responded\n", io_read(channel));
            io_write(channel, 1);
        }
    }
}


int main(int argc, char const *argv[])
{
    io_init();
	
    pthread_t disturbance[10];

    for (int i = 0; i < 10 ; i++)
    {
        pthread_create(&disturbance[i], NULL, disturbe, NULL);
    }

	pthread_t thread_1, thread_2, thread_3;
	pthread_create(&thread_1, NULL, respond, (void*)1);
	pthread_create(&thread_2, NULL, respond, (void*)2);
    pthread_create(&thread_3, NULL, respond, (void*)3);
	pthread_join(thread_1, NULL);
	pthread_join(thread_2, NULL);
    pthread_join(thread_3, NULL);

	return 0;
}