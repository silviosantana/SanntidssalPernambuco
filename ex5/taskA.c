#define _GNU_SOURCE

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>


#include "io.h"


void *respond(int channel)
{
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
	
	pthread_t thread_1, thread_2, thread_3;
	pthread_create(&thread_1, NULL, respond, 1);
	pthread_create(&thread_2, NULL, respond, 2);
    pthread_create(&thread_3, NULL, respond, 3);
	pthread_join(thread_1, NULL);
	pthread_join(thread_2, NULL);
    pthread_join(thread_3, NULL);

	return 0;
}