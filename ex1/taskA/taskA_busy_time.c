#include <sys/times.h>
#include <stdio.h>

void busy_wait(int sec){
    //get time now using times()
    struct tms t;
    clock_t now = times(&t);

    sec = sec *100;
    int then = (int)now + sec;

    //compare now and then
    while((then - (int)now) > 0){
        for(int i = 0; i < 10000; i++){}
        now = times(&t);
    }
}


int main(int argc, char const *argv[])
{
    
    busy_wait(1);
    return 0;
}
