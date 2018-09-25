#define _GNU_SOURCE

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sched.h>

#include "io.h"

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

void *test(void* argp)
{
    struct timespec waketime;
    clock_gettime(CLOCK_REALTIME, &waketime);

    struct timespec period = {.tv_sec = 0, .tv_nsec = 500*1000*1000};

    while(1){
        printf("Pernambuco\n");
        
        // sleep
        waketime = timespec_add(waketime, period);
        clock_nanosleep(CLOCK_REALTIME, TIMER_ABSTIME, &waketime, NULL);
    }
}

int main(int argc, char const *argv[])
{
    pthread_t testThread;
    pthread_create(&testThread, NULL, test, NULL);
    pthread_join(testThread, NULL);
    return 0;
}