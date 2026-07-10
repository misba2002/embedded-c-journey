#include<stdio.h>

int main()
{
    int n, again;
    
    printf("Enter a number : ");
    scanf("%d", &n);
    
    int divisor=1, sum=0;
    
    if(n<0)
    {
        printf("Error: Invalid Input, Enter only positive number");
        return 0;
    }
    
   for(int i=1; i<n; i++)
   {
       if(n%i==0)
       {
           sum+=i;
       }
      
       
   }
    printf("sum is %d\n", sum);
   again=(sum+n)/2;
   printf("again is %d\n", again);
   if(sum==n)
   {
       if((sum+n)/2==n)
       {
           printf("Yes, entered number is perfect number ");
       }
       else
       {
            printf("No, entered number is not a perfect number ");
       }
   }
    else
   {
       
    printf("No, entered number is not a perfect number ");
    
   }
   return 0;
}