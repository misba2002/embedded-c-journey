#include<stdio.h>

void primenumbers(int num)
{
    int flag=1;
    for(int i=2; i<=num; i++)
    {
        flag=1;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        printf("%d, ", i);
    }
    printf("\n");

}

int main()
{
    int num;
    scanf("%d", &num);

    primenumbers(num);
    return 0;

}