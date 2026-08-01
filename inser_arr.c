#include<stdio.h>

int main()
{
    int size;

    printf("enter the size:");
    scanf("%d", &size);

   

    size=size+1;

    int arr[size];

    printf("Enter the aaray in element:");
    for(int i=0; i<size-1; i++ )
    {
        scanf("%d", &arr[i]);
    }

    int element, index;
    printf("Enter the element and the index :");
    scanf("%d%d", &element, &index);

    if(index>=size)
    {
        printf("Invalid index\n");
        return 0;
    }

    int shift_count=size-index-1;

    for(int j=size-1; j>index; j--)
    {
        arr[j]=arr[j-1];
    }

    arr[index]=element;

    printf("After inserting element :");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    

  


}