#include<stdio.h>

int main()
{
    int n,reverse=0,last_digit;

    printf("Enter the number to be reversed : ");
    scanf("%d", &n);

    while(n>0)
    {
        last_digit=n%10;
        reverse=reverse*10+last_digit;
        n=n/10;

    }

    printf("Reversed number is %d\n", reverse);
    return 0;
}