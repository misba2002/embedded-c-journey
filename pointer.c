#include<stdio.h>

int main()
{
    int num=100;
    int *ptr=&num;

    printf("%d\n", *ptr);
    printf("%p\n", ptr);
}