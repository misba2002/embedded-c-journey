#include<stdio.h>

int main()
{
    int n, orignal_value, sum=0, last_digit, count=0, temp, i,power=1;

    printf("Enter the number: ");
    scanf("%d", &n);

    temp=n;
    orignal_value=n;


    while(temp>0)
    {
        temp=temp/10;
        count++;

    }
    
    printf("count is %d\n",count);
    
       
         
        while(n>0)
        {
            last_digit=n%10;
            i=count;
            while(i>0)
            {
                power=power*last_digit;
                i--;

            }
            printf("power is %d\n",power);
            sum=sum+power;
            power=1;
            n=n/10;
           
        }
        printf("sum is %d\n",sum);
        

    

    if(orignal_value==sum)
    {
        printf("Amnstrong number!\n");
    }
    else printf("Not an Amnstrong number!\n");

    return 0;
}