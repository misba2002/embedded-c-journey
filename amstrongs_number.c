#include<stdio.h>

int main()
{
    int n, temp, count_temp, count=0, orignal_value, power=1, last_digit, sum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n<0)
    {
        printf("Enter a valid positive number\n");
        return 0;
    }


    temp=n;
    orignal_value=n;
    
    if(n==0)
    {
        count=1;
    }
    else
    {
        while(temp>0)
      {
        temp=temp/10;
        count++;
      }

    }
    
    count_temp=count;

    while(n>0)
    {
        last_digit=n%10;
        while(count>0)
        {
          power=power*last_digit;
          count--;
        }
        sum=sum+power;
        power=1;
        count=count_temp;
        n=n/10;
    }
    if(orignal_value==sum)
    {
        printf("Amstrong number\n");
    }
    else printf("Not an Amstrong number\n");
}