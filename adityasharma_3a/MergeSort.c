#include <stdio.h>

void MergeSorted(int array1[], int l1, int array2[], int l2)
{
    //
}

void MergeSort(int array[], int l)
{
    if(l > 2)
    {
        MergeSort(array, l/2);
        MergeSort(array+l/2, l-l/2);
    }
    else if(l == 2)
    {
        if(array[0] > array[1])
        {
            int temp = array[0];
            array[0] = array[1];
            array[1] = temp;
        }
    }
    else if(l < 1)
    {
        return;
    }
    
}

int main(void)
{
    printf("Enter length of array\n");
    int n;
    scanf("%d", &n);
    printf("Enter elements of array\n");
    int array[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    MergeSort(array, n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}