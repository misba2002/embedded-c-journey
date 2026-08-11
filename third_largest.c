#include<stdio.h>
int second_largest(int *arr, int size)
{
     int largest=arr[0];
     int smallest=arr[0], second_largest;
     for(int i=0; i<size; i++)
     {
        if(largest < arr[i])
        largest=arr[i];

        if(smallest > arr[i])
        smallest=arr[i];
     }

     second_largest=smallest;
     for(int i=0; i<size; i++)
     {
        if(arr[i] > second_largest && arr[i] < largest )
        {
           second_largest=arr[i]; 
        }
     }

      

     int third_largest=smallest;
     for(int i=0; i<size; i++)
     {
        if(arr[i] > third_largest && arr[i] < second_largest)
        {
            third_largest=arr[i];
        }
     }

     return third_largest;
}

int main()
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array elements:");
    for(int i=0; i<size; i++) scanf("%d", &arr[i]);

   int res =  second_largest(arr, size);

   printf("Third largest elements is %d\n", res);
   return 0;

}