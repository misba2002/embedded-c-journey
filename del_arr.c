#include<stdio.h>
int main()
{
    int key, size, flag=1;

    printf("Enter size:");
    scanf("%d", &size);


     int arr[size];

    printf("Enter array elements:");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter key element:");
    scanf("%d", &key);

    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            flag=0;
            while(i<size-1)
            {
                printf("%d <== %d\n",arr[i], arr[i+1]);
                arr[i]=arr[i+1];
                
                i++;
            }
        }
        
    }
    if(flag==1)
    {
        printf("key element not found!\n");
        return 0;
    }

    printf("after deleting element\n");

    for(int i=0; i<size-1; i++)
    {
        printf("%d ", arr[i]);
    }
}