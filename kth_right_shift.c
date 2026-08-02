#include<stdio.h>

int main()
{
    int size;

    printf("Enter size:");
    scanf("%d", &size);

    int arr[size];

    printf("Array elements:");
    for(int k=0; k<size; k++)
    {
        scanf("%d", &arr[k]);
    }

    int r_count;
    printf("Enter no of right shift rotations:");
    scanf("%d", &r_count);
    int times=r_count;
    r_count=r_count%size;
    int temp;
    while(r_count>0)
    {
        temp=arr[size-1];
        for(int j=size-1; j>0; j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
        printf("current array:");
        for(int k=0; k<size; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
        r_count--;
    }

     printf("array after rotating %d times\n:",times);
        for(int k=0; k<size; k++)
        {
            printf("%d ", arr[k]);
        }
    printf("\n");

}