#include<stdio.h>

int main()
{
    int size;

    printf("enter array size:");
    scanf("%d", &size);

    int arr[size];
     int n=size;
    printf("Enter n (numbers are from 1 to n): ");
    for(int i=0; i<size-1; i++)
    {
        scanf("%d",&arr[i]);
        if(i>=1 && i<=size-2 && arr[i]<=arr[i-1])
        {
            printf("Input must be in strictly increasing order.!\n");
            return 0;
        }
       if(arr[i] < 1 || arr[i] > n)
        {
            printf("Elements must be between 1 and %d.\n", n);
            return 0;
        }
    }
        int ori_sum= n * (n + 1) / 2;

        int act_sum=0;

        for(int i=0; i<size-1; i++)
        {
            act_sum+=arr[i];
        }

        int miss_n=ori_sum-act_sum;

        printf("Missing number is %d\n",miss_n);


    
}