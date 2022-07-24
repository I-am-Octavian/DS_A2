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

    int index = -1;

    int start = 0;
    int end = n;
    int mid = n/2;

    while(end > start)
    {
        if(array[mid] == ele)
        {
            index = mid;
            break;
        }
        else if(array[mid] < ele)
        {
            start = mid+1;
            mid = (start+end)/2;
        }
        else // array[mid] > ele
        {
            end = mid-1;
            mid = (start+end)/2;
        }
    }

    if(index == -1)
        printf("Element not found\n");
    else
        printf("Element found at %d index\n", mid);
}