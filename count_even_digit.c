#include<stdio.h>

int main()
{
    int n, last_digit, count=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while(n>0)
    {
        last_digit=n%10;
        if(last_digit%2==0)
        {
            count++;
            n=n/10;

        }
        else
        {
            n=n/10;
        }
    }

    printf("The number of digits that are even are %d\n", count);

    return 0;
}