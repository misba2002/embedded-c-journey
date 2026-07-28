#include<stdio.h>

int main()
{
    int largest, second_largest,  size;

    int arr[3]={7,7,7};

    size=sizeof(arr)/sizeof(int);

    if (size < 2)
    {
    printf("Second largest element does not exist.\n");
    return 0;
     }
   largest=arr[0];
   second_largest=arr[1];

   if(largest<second_largest)
   {
    int temp=largest;
    largest=second_largest;
    second_largest=temp;

   }
    printf("size of array is %d\n", size);

    for(int i=2; i<size; i++ )
    {
        if(largest<arr[i])
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(second_largest<arr[i] && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
        else if(second_largest==largest && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
    }
    if(largest==second_largest)
    {
        printf("No distinc second largets value all eleents in the array are same! and i.e is %d",largest);
        return 0;
    }
    printf("%d is the second largest element in array\n", second_largest);
    return 0;
}