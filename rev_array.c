#include<stdio.h>

int main()
{
    int arr[]={11,22,33,54,65};

    int temp, n=sizeof(arr)/4-1;
    printf("%d is size of array\n",n);

    for(int i=0; i<n/2+1; i++ )
    {
        temp=arr[i];
        // printf("temp is %d\n",temp);
        arr[i]=arr[n-i];
        //  printf("arr[i] is %d\n",arr[i]);
        arr[n-i]=temp;
        //  printf("arr[n-i] is %d\n",arr[n-i]);
    }

    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
