#include <stdio.h>
#include <pthread.h>

long counter = 0;

void *increment( void *threadid)
{
	long mycounter = 0;
	for(int i = 0; i < 50000000 ; i++)
	{
		counter++;
		mycounter++;
	}
	printf("my counter: %ld \t global counter: %ld\n", mycounter, counter);
	pthread_exit(NULL);
}


int main(int argc, char const *argv[])
{
	pthread_t thread_1, thread_2;
	pthread_create(&thread_1, NULL, increment, NULL);
	pthread_create(&thread_2, NULL, increment, NULL);
	pthread_join(thread_1, NULL);
	pthread_join(thread_2, NULL);

	return 0;
}