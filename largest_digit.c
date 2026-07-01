#include<stdio.h>

int main()
{
    int n, largest=0, last_digit;

    printf("Enter the number: ");
    scanf("%d", &n);

    while(n>0)
    {
        last_digit=n%10;
        
        if(last_digit>largest)
        {
            largest=last_digit;
            n=n/10;
        }
        else n=n/10;
   
    }

    printf("Largest  digit is %d\n",largest);

    return 0;


}