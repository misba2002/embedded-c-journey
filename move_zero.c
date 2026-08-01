#include<stdio.h>

int main()
{
    int size;

    printf("Enter the size:");
    scanf("%d",&size);

    int arr[size];

    printf("enter array elements:");
    for(int i=0; i<size; i++)
    scanf("%d", &arr[i]);

   int count=0;
   int i=0;

    

   while(i<size-count)
   {
      int temp=arr[i];
       
     if(arr[i]==0)
     {
        for(int j=i; j<size-count-1; j++)
      {
        arr[j]=arr[j+1];
      }
      arr[size-count-1]=temp;
       count++;
     }
     else
     {
       i++;
     }
     
     


   }

   printf("Array after moving zeros:\n");

        for(int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }







}