#include <stdio.h>
#include "RandomArray.h"

int main(void)
{
    /*
    printf("Enter length of array\n");
    int n;
    scanf("%d", &n);
    printf("Enter elements of array\n");
    int array[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    */
    int n = 30;
    int array[n];
    RandomArrayGenerator(array, n);

    clock_t start, end;
    double cpu_time_used;
    
    start = clock();
    for(int case_no = 0; case_no < 300; case_no++) {
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }}
    end = clock();

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time to execute : %0.15lf \n", time_taken);
}