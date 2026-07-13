#include<stdio.h>

 int main()
 {
    int n=6;
    int last_value=2*n;
    for(int i=1; i<=n; i++)
    {
       for( int j=1; j<=i; j++)
       {
        printf("*");
       }
        int k=last_value-2*i;
        for(int j=k; j>=1; j--)
       {
            printf(" ");
          
       }
        for( int j=1; j<=i; j++)
       {
        printf("*");
       }
       printf("\n");
      
       
       
      
       
    }
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        int k=last_value-2*i;
        for(int j=1; j<=k; j++)
        {
            printf(" ");
        }
         for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");

    }
    


 }