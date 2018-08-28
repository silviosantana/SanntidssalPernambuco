#include <assert.h>
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <sys/times.h>
#include <time.h>
#include <unistd.h>
#include <x86intrin.h>


int main(int argc, char const *argv[])
{
    
    int ns_max = 50;
    int histogram[ns_max];
    memset(histogram, 0, sizeof(int)*ns_max);

    struct tms tt1;
    struct tms tt2;

    int tics_per_second;

    tics_per_second = sysconf(_SC_CLK_TCK);

    for(int i = 0; i < 10*1000*1000; i++){
        
        // t1 = timer()
        // t2 = timer()

        clock_t t1 = times(&tt1);
        clock_t t2 = times(&tt2);

        
        int ns = (((double)t2/tics_per_second) - ((double)t1/tics_per_second)) * 1000000000;
        
        if(ns >= 0 && ns < ns_max){
            histogram[ns]++;
        }
    }

    for(int i = 0; i < ns_max; i++){
        printf("%d\n", histogram[i]);
    }


    return 0;
}
