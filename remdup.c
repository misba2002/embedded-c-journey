#include<stdio.h>

int main()
{
    int arr[6]={-10, -20, -10, -20,-10, -20};

    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=-1;
            }
        
        }
    }

    printf("printing arrays:");
    for(int i=0; i<6; i++)
    {
        printf("%d ", arr[i]);
    }

    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(arr[i]==-1)
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
     printf("\nprinting arrays:");
    for(int i=0; i<6; i++)
    {
        if(arr[i]==-1)
        continue;
        printf("%d ", arr[i]);
    }
   printf("\n");
    


}