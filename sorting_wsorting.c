#include<stdio.h>
void print_sorted(int *arr, int size);
int main()
{
    int size;

    printf("Enter the size:");
    scanf("%d", &size);

    if(size<1)
    {
        printf("Invalid size\n");
        return 0;
    }
    int arr[size];

    printf("Enter array elements:");
    for(int i=0; i<size; i++)
    scanf("%d", &arr[i]);

    print_sorted(arr, size);

}

void print_sorted(int *arr,int size)
{
   int largest, smallest, second_smallest;
   largest=arr[0];
   smallest=arr[0];
   
   for(int i=0; i<size; i++)
   {
    if(largest < arr[i])
    largest = arr[i];

    if(smallest > arr[i])
    smallest = arr[i];
   }

   second_smallest = largest;

   for(int i=0; i<size; i++)
   {
    second_smallest=largest;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > smallest && arr[i] < second_smallest)
        {
          second_smallest = arr[i];
        }
        
    }
    printf("%d ", smallest);
    smallest = second_smallest ;
   }
}
