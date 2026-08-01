#include<stdio.h>

int main()
{
    int size;

    printf("enter the size:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array  size elements:");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int even=0, odd=0, even_arr[size], odd_arr[size];
    for(int i=0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            even_arr[even++]=arr[i];
        }
        else odd_arr[odd++]=arr[i];
    }

    printf("even array elements:");
    for(int i=0; i<even; i++)
    {
        printf("%d ", even_arr[i]);
    }

    printf("\n");
     printf("odd array elements:");
    for(int i=0; i<odd; i++)
    {
        printf("%d ", odd_arr[i]);
    }

    printf("\n");
}