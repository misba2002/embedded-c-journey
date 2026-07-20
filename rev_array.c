#include<stdio.h>

int main()
{
    int arr[]={0, 1, 88 ,99, 100};

    int mid_val, temp, n=sizeof(arr)/4-1;
    printf("%d is size of array\n",n);

    if(n%2==0)
    {
     mid_val=n/2;   
    }
    else mid_val=n/2+1;

     printf("%d is middle index of array\n",mid_val);


    for(int i=0; i<mid_val; i++ )
    {
        temp=arr[i];
        // printf("temp is %d\n",temp);
        arr[i]=arr[n-i];
        //  printf("arr[i] is %d\n",arr[i]);
        arr[n-i]=temp;
        //  printf("arr[n-i] is %d\n",arr[n-1-i]);
    }

    for(int i=0; i<=n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
