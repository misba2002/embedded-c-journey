#include<stdio.h>

void fibonacci(int n , int m, int value)
{
    if(m > value)
    {
       
         printf("[%d + %d which is %d is > %d ]\n",n,m, n+m, value);
         return;
    }
   

    printf("%d ",m);
    fibonacci(m, n+m, value);
    
}

int main()
{
    int value, n ,m=1;

    printf("Enter your starting value eitherf (0,1) or (1,1)\n");

    printf("Enter first element value (0 or 1):");
    scanf("%d", &n);

    if(n>1 || n<0)
    {
     printf("Invalid input!, first element of the fibonicce series can be either 1 or 0. :(");
     return 0;
    }

   
    printf("Enter the limit to fibonacci series :");
    scanf("%d", &value);



    if(n == 0)
    {
      printf("%d ",n);
    }
   
    fibonacci(0, 1, value);
}