#include <stdio.h>
#include <stdbool.h>

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

    for(int i = 0; i < n-1; i++)
    {
        bool sorted = true;
        
        for(int j = 0; j < n-1; j++)
        {
            if(array[j] < array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                sorted = false;
            }
        }

        if(sorted)
            break;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}