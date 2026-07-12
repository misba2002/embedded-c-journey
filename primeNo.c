#include<stdio.h>

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
           
            printf("Not a prime no\n");
             return 0;
        }

    }
   printf("prime no !\n");
   return 0;



   
}
