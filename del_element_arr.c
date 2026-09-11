#include<stdio.h>

int main()
{
    int size;

    printf("Enter the size:");
    scanf("%d", &size);

    int arr[size];

    for(int j=0; j<size; j++)
    {
        scanf("%d", &arr[j]);
    }

    

    int index;

    printf("Enter the index:");
    scanf("%d", &index);

    if(index >= size)
    {
        printf("Invalid index!");
        return 0;
    }

    for(int j=index; j<size-1; j++)
    {
        printf("%d <== %d\n", arr[j], arr[j+1]);
        arr[j]=arr[j+1];
    }

    printf("After deleting the index:");
    for(int k=0; k<size-1; k++)
    {
        printf("%d ", arr[k]);
    }
     printf("\n");
}