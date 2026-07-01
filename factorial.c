#include<stdio.h>

int main()
{
    int i=1,factorial=1,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(i<=n)
    {
        factorial=factorial*i;
        i++;
    }

    printf("Fcatorial of %d is : %d\n",n, factorial);

    return 0;
}