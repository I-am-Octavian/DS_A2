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
        int key = i;
        for(int j = 0; j < i; j++)
        {
            if(array[j] > array[key])
            {
                int temp = array[j];
                array[j] = array[key];
                array[key] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}