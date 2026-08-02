#include<stdio.h>

int main()
{
    int size;

    printf("Enter the size:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:");
    for(int k=0; k<size; k++)
    {
        scanf("%d", &arr[k]);
    }

    int r_count;

    printf("Enter the number of left shift rotations: ");
    scanf("%d", &r_count);

   

    r_count=r_count%size;

      int temp;
    for(int i=0; i<r_count; i++)
    {
        temp=arr[0];
        // printf("temp is %d\n", temp);
        for(int i=0; i<size-1; i++)
        {
        
           
            //  printf("%d <== %d\n", arr[i], arr[i+1]);
            arr[i]=arr[i+1];

        }
        arr[size-1]=temp;
        // printf("current array: ");
        // for(int i=0; i<size; i++)
        // {
        //     printf("%d ", arr[i]);
        // }
        // printf("\n");
       
    }

     printf("After %d times of left rotation:", r_count);
        for(int i=0; i<size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

    
}