#include <stdio.h>
#include "RandomArray.h"

int main(void)
{
    int n = 120;
    int array[n];
    RandomArrayGenerator(array, n);

    clock_t start, end;
    double cpu_time_used;
    
    start = clock();

    //Code Here
    
    end = clock();

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time to execute : %lf \n", time_taken);
}