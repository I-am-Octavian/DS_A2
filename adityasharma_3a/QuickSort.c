#include <stdio.h>
#include "RandomArray.h"

int Partition(int array[], int lower, int higher)
{
    int left = lower;
    int right = higher;

    int pivot = array[higher];

    while(left < right)
    {
        while (array[left] <= pivot && left < right)
        {
            left++;
        }
        while (array[right] >= pivot && left < right)
        {
            right--;
        }
        
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;
    }
    int temp = array[left];
    array[left] = array[higher];
    array[higher] = temp;

    return left;
}

void QuickSort(int array[], int lower, int higher)
{
    if(lower >= higher)
        return;

    int partitionIndex = Partition(array, lower, higher);
    QuickSort(array, lower, partitionIndex-1);
    QuickSort(array, partitionIndex + 1, higher);
    
}

int main(void)
{
    int n = 120;
    int array[n];
    RandomArrayGenerator(array, n);
    
    clock_t start, end;
    double cpu_time_used;
    
    start = clock();

    QuickSort(array, 0, n-1);
    
    end = clock();

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time to execute : %lf \n", time_taken);
}