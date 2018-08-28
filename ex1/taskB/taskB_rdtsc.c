#include <stdio.h>

uint64_t rdtsc(){
    unsigned int lo,hi;
    __asm__ __volatile__ ("rdtsc" : "=a" (lo), "=d" (hi));
    return ((uint64_t)hi << 32) | lo;
}

int main(int argc, char const *argv[])
{
    struct tms t;
    for(int i = 0; i < 10*1000*1000; i++){
    clock_t now = times(&t);
    }  

}