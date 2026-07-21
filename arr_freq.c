#include<stdio.h>

int main()
{
    int size;

    printf("Enter array size:");
    scanf("%d", &size);

    int arr[size], count=1, temp=0;

    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }

    printf("arrays in ascending array:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i=0; i<size;)
    {
        count=1;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                // printf("\n%d is found at %d index \n",arr[i],j);
                count++;
            }

        }
        printf("%d is appearing %d times\n",arr[i], count);
        while(i<size-1 && arr[i]==arr[i+1])
    
        {
            i++;
        }
       
        i=i+1;
        // printf("\nvalue of i now is %d\n",i);
    }

    
}