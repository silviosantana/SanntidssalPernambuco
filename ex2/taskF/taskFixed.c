#include <pthread.h>
#include <stdio.h>
#define N 5


pthread_mutex_t forks[N];

int max(int a, int b)
{
    return ((a > b) ? a : b);
}

int min(int a, int b)
{
    return ((a <= b) ? a : b);
}

void pick_up_forks(int philId)
{
    int r = (philId + 1) % N;
    int l = (philId + N - 1) % N;

    int mx = max(r,l);
    int mn = min(r,l);

    pthread_mutex_lock(&forks[mx]);
    printf("Philosopher %d took fork %d\n", philId, mx);
    pthread_mutex_lock(&forks[mn]);
    printf("Philosopher %d took fork %d\n", philId, mn);

}

void release_forks (int philId)
{
    int r = (philId + 1) % N;
    int l = (philId + N - 1) % N;

    pthread_mutex_unlock(&forks[r]);
    printf("Philosopher %d released fork %d\n", philId, r);
    pthread_mutex_unlock(&forks[l]);
    printf("Philosopher %d released fork %d\n", philId, l);
}

void* philosopher(int args)
{   
    while(1)
    {
        printf("Philosopher %d is thinking\n", args);
        for (int i = 0 ; i < 100 ; i++);//think();
        pick_up_forks(args);
        printf("Philosopher %d is eatinggggggggggggggggggggggggggggggggggggggggggggggggggggg\n", args);
        for (int i = 0 ; i < 100 ; i++); //eat();
        release_forks(args);
    }

}

void think()
{

}

int main(){
    pthread_t philosophers[N];
    for (int i = 0; i < N; ++i)
    {
        pthread_mutex_init(&forks[i], NULL);
    }
    for (int i = 0; i < N; ++i)
    {
        pthread_create(&philosophers[i],NULL,philosopher,i);
    }

    for (int i = 0; i < N; i++)
    {
        pthread_join(philosophers[i], NULL);
    }  
    for (int i = 0; i < N; ++i)
    {
        pthread_mutex_destroy(&forks[i]);
    }
}