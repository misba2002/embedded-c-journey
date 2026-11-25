#include<stdio.h>
searchInsert(int *arr,int  size,int target)
{
    if(target > arr[size-1])
    {
        return size;
    }
    for(int i=0; i<size; i++)
    {
        if(target == arr[i] )
        {
            return i;
        }
        else if(target > arr[i])
        {
            return i;
        }
    }
}
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements:");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target:");
    scanf("%d", target);

    int index = searchInsert(arr, size, target);

}