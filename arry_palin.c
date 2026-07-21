#include<stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

   
    int arr[size],flag=1;

    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size/2; i++)
    {
        if(arr[i]!=arr[(size-1)-i])
        {
            flag=0;
            printf("Given array is not an palindrom!");
            break;
        }
    }

    if(flag==1)
    {
        printf("Given array is an palindrom!");
    }

    
}