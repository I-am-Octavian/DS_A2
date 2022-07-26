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
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1-i; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    end = clock();

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time to execute : %lf \n", time_taken);
}