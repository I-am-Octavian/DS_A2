#include <stdio.h>
#include <memory.h>
#include "RandomArray.h"

void MergeSorted(int array1[], int l1, int array2[], int l2)
{
    int k = l1-- + l2--;
    int len = k;
    int array[k--];

    while(l1 >= 0 && l2 >= 0)
    {
        if(array1[l1] > array2[l2])
            array[k--] = array1[l1--];
        else
            array[k--] = array2[l2--];
    }
    while(l1 >= 0)
    {
        array[k--] = array1[l1--];
    }
    while(l2 >= 0)
    {
        array[k--] = array2[l2--];
    }

    memcpy(array1, array, len*4);    
}

void MergeSort(int array[], int l)
{
    if(l > 1)
    {
        MergeSort(array, l/2);
        MergeSort(array+l/2, l-l/2);
        MergeSorted(array, l/2, array+l/2, l-l/2);
    }    
}

int main(void)
{
    int n = 30;
    int array[n];
    RandomArrayGenerator(array, n);

    clock_t start, end;
    double cpu_time_used;
    
    start = clock();
    MergeSort(array, n);
    end = clock();

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time to execute : %lf \n", time_taken);
}