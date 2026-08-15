#include<stdio.h>

void negative_fibonacci(int n, int m, int value)
{
     

    if (n == value || n - m < value)
    {
        printf("%d ", n);
        printf("[Here n is %d and  n-m which is %d - %d = %d]\n", n, n, m, n-m);
         return;
    }
       



      printf("%d ", n);
      negative_fibonacci(m, n-m, value);
}
int main()
{

    int value;
     
    printf("Enter the limit to fibonacci series :");
    scanf("%d", &value);


     negative_fibonacci(0,1, value);
   
}