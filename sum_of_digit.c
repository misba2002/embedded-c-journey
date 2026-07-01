#include<stdio.h>

int main()
{
    int n, sum=0, last_digit;

    printf("Enter the number : ");
    scanf("%d", &n);

    while(n>0)
    {
        last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;
    }
    printf("Sum of the digits in given number is: %d\n", sum);

    return 0;
}