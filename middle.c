// FINDING MIDDLE NO USING ONLY NESTED IF ELSE CONDITION
#include<stdio.h>

int main()

{
    int n1,n2,n3;

    printf("Enter the numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1>n2)
    {
        if(n1<n3)
        {
            printf("%d is the middle number", n1);
        }
        else if(n2>n3)
        {
            printf("%d is the middle number", n2);
        }
        else
        {
             printf("%d is the middle number", n3);
        }
    }
    else 
    {
        if(n1>n3)
        {
             printf("%d is the middle number", n1);
        }
        else if(n2<n3)
        {
             printf("%d is the middle number", n2);
        }
        else
        {
             printf("%d is the middle number", n3);
        }
    }
    return 0;
}