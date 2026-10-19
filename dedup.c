#include<stdio.h>

int main()
{
    int size;

    printf("Enter the array size:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements:");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    printf("Before sorting the array:");
     for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\nsorting array........");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("array sorted.......\n");

    printf("\nAFter sorting the array:");
     for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
   

    for(int i=0; i<size;)
    {
        
        for( int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=-1;
            }
           else
           {
           i=j-1;
            break;
           }
            
        }
        i++;
       
       
    }

     printf("\nAFter removing duplicates the array:");
     for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

      printf("\nDistinct  array:");
     for(int i=0; i<size; i++)
    {
        if(arr[i]==-1)
        {
            continue;
        }
        printf("%d ", arr[i]);
    }





}