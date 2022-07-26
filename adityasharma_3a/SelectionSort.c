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
    for(int i = 1; i < n; i++)
    {
        int min = i;
        for(int j = i+1; j < n; j++)
        {
            if(array[j] < array[min])
                min = j;            
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
    end = clock();

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time to execute : %lf \n", time_taken);
}