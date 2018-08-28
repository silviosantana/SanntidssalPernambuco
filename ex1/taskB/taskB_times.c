#include <stdio.h>
#include <sys/times.h>


int main(int argc, char const *argv[])
{
    struct tms t;
    for(int i = 0; i < 10*1000*1000; i++){
        clock_t now = times(&t);
    }  

}