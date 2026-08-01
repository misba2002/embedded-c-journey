#include<stdio.h>

int main()
{
    int size, element;
    printf("Enter the array size:");
    scanf("%d", &size);

    int arr[size+1];

    printf("enter the array elements:");
    for(int i=0; i<size; i++)
    {
      scanf("%d", &arr[i]);
    }

    printf("Enter the elemnet to add in array:");
    scanf("%d", &element);

    arr[size]=element;

    printf("Updated array is:");
    for(int i=0; i<size+1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}