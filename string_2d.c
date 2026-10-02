#include<stdio.h>
int main()
{
    char str[3][20];
    char *str1[3]={"hi","hello","welcome"};

    for(int i=0; i<3; i++)
    {
        scanf("%s", str[i]);
    }

    printf("\n");
    for(int i=0; i<3; i++)
    {
        printf("%s\n", str1[i]);
    }

    

}