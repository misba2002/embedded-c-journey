#include<stdio.h>
int main()
{
    int size;

    printf("Enter array size:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:");
    for(int i=0; i<size; i++)
    scanf("%d", &arr[i]);

    int count, first, previous_first=size, element, index,   element_count=0;

    for(int i=0; i<size; i++)
    {
        count=1;
        first=-1;
        for(int j=i+1; j<size; j++)
        {
             if(arr[i] == arr[j])
             {
                count++;
                if(first == -1)
                {
                    first =j;
                }
             }

        }
        if(count>1 &&  first < previous_first)
        {
             previous_first=first;
             element=arr[i];
             index=i;
             element_count=count;
        }
        
    }
    if(element_count < 1)
    {
          printf("No elements repeated\n");
          return 0;
    }
    printf("Element = %d, index = %d, count = %d\n", element, index, element_count);

   
}