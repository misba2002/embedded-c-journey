#include<stdio.h>

int my_square(int n)
{
    int res;
    res= n * n;
    return res;
}

int main()
{
    int n, res;

    scanf("%d", &n);
  
    res=my_square(n);

    if(res<0)
    {
        res=res*(-1);
    }

    printf("Square is %d", res);
    
}


