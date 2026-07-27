#include <stdio.h>

int oddeven(int n)
{
    if(n%2==0) return 0;
    else return 1;
}

int main()
{
    int n,res;
    printf("Enter the values:");
    scanf("%d", &n);
    res=oddeven(n);

    if(res==0)
   
        printf("Number %d is even\n", n);
    else printf("Number %d is odd\n", n);    
   
   
}