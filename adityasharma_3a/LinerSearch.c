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

    printf("Enter element to be searched\n");
    int ele;
    scanf("%d", &ele);

    for(int i = 0; i < n; i++)
    {
        if(array[i] == ele)
        {
            printf("Element found at %d index\n", i);
            return 0;
        }
    }
    printf("Element not found\n");
}