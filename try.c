#include<stdio.h>

int main()
{
    int arr[6]={-2,-6,-8,-1,-10,-5};
    int smalest=arr[0];
    int largest=arr[0];

    for(int i=0; i<6; i++)
    {
        if(smalest>arr[i])
        {
          smalest=arr[i];
        }

         
        
        if(largest<arr[i])
        {
          largest=arr[i];
        }
    }

   

    printf("smallest is %d\n", smalest);
    printf("Largest is %d\n", largest);
}