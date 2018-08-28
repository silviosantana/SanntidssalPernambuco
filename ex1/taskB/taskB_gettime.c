#include <stdio.h>
#include <time.h>


int main(int argc, char const *argv[])
{
    struct timespec now;
    for(int i = 0; i < 10*1000*1000; i++){
        clock_gettime(CLOCK_MONOTONIC, &now);
    }  

}

