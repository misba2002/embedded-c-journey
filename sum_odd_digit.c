#include<stdio.h>

int main()
{
    int n, last_digit, sum=0;
    
    printf("Enter the number: ");
    scanf("%d", &n);

    while(n>0)
    {
        last_digit=n%10;
        if(last_digit%2!=0)
        {
            sum=sum+last_digit;
            n=n/10;
        }
        else
        {
            n=n/10;
        }

    }
    printf("The sum of odd digit numbers is %d\n", sum);
}