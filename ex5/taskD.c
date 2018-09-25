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

struct timespec timespec_normalized(time_t sec, long nsec){
    while(nsec >= 1000000000){
        nsec -= 1000000000;
        ++sec;
    }
    while(nsec < 0){
        nsec += 1000000000;
        --sec;
    }
    return (struct timespec){sec, nsec};
}

struct timespec timespec_add(struct timespec lhs, struct timespec rhs){
    return timespec_normalized(lhs.tv_sec + rhs.tv_sec, lhs.tv_nsec + rhs.tv_nsec);
}

void *respond(void* argp){
    int channel = (size_t)argp;
    printf("started response task with channel %d\n", channel);
    set_cpu(1);

    struct timespec waketime;
    clock_gettime(CLOCK_REALTIME, &waketime);

    struct timespec period = {.tv_sec = 0, .tv_nsec = 1};

    while(1){
        if (io_read(channel) == 0)
        {
            io_write(channel, 0);
            //usleep(5);
            //printf("channel %d responded\n", io_read(channel));
            io_write(channel, 1);
        }
        
        // sleep
        waketime = timespec_add(waketime, period);
        clock_nanosleep(CLOCK_REALTIME, TIMER_ABSTIME, &waketime, NULL);
    }
}

void *disturbe(void* argp)
{
    while(1);
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