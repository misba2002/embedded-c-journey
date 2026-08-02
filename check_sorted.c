#include<stdio.h>

int main()
{
    int size, flag=1;

    printf("Enter size:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elementes:");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag=0;
            printf("Given array is not in ascending(SORTED) order!");
            break;
        }
    }
    if(flag==1)
    {
        printf("Given array is  in ascending(SORTED) order!");
    }
    return 0;
}