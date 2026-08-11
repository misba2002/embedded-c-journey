#include<stdio.h>

void fun (int *arr1, int size, int *arr2, int new_size);

int main()
{
    int size;

    printf("Enter array size:");
    scanf("%d", &size);

    int arr[size], arr_new[size];
   

    printf("Enter array elements :");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    fun(arr, size, arr_new , size );




}

void fun (int *arr1, int size, int *arr2, int new_size)
{
    new_size=0;
    int found;

    for(int i=0; i<size; i++)
    {
        found=1;
        for(int j=0; j<new_size; j++)
        {
            if(arr1[i] == arr2[j])
            {
                found=0;
                break;
            }

        }
        if(found == 1)
        {
            arr2[new_size++]=arr1[i];
        }
    }

    printf("Unique array is:");
    for(int i=0; i<new_size; i++)
    {
       printf("%d ", arr2[i]);
    }
    printf("\n");
}