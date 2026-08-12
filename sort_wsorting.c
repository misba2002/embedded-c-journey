#include<stdio.h>

void count_print(int *arr, int size,int element)
{
    int k=0;
    for(int i=0; i<size; i++)
    {
        if(element ==  arr[i])
        {
            k++;
        }
    }
    for(int i=0; i<k; i++)
    {
        printf("%d ", element);
    }
}

int smallest_arr(int *arr, int size, int element, int smallest)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]< element && arr[i]>smallest)
        {
            element=arr[i];
        }
    }

    

    return element;

   
}

int main()
{
    int size;
    printf("Enter size:");
    scanf("%d", &size);

    if(size<=1)
    {
        printf("INvalid size cant sort array elements:\n");
        return 0;
    }

    int arr[size];

    printf("Enter array elements:");
    for(int i=0; i<size; i++)
    scanf("%d", &arr[i]);

    int largest=arr[0], smallest=arr[0];

    for(int i=0; i<size; i++)
    {
        if(largest<arr[i])
        largest=arr[i];

        if(smallest>arr[i])
        smallest=arr[i];
    }

    count_print(arr, size, smallest);


    while(smallest != largest)
    {
        
           smallest = smallest_arr(arr, size, largest, smallest);
           count_print(arr,size, smallest);
        
        
    }
    
   
}

