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
    for(int j = 1; j < n; j++)
    {
        int key = array[j];
        int i;
        for(i = j-1; i >= 0 && array[i] > key; i--)
        {
            array[i+1] = array[i];
        }
        array[i+1] = key;
    }
    end = clock();

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time to execute : %lf \n", time_taken);
}