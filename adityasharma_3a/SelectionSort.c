#include <stdio.h>

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

    for(int i = 0; i < n; i++)
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

    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}