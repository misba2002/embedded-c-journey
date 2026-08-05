#include<stdio.h>

void swap(int *ptr1, int *ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

int main()
{
    int n1=100, n2=99;
    int *ptr1=&n1, *ptr2=&n2;

    swap(&n1, &n2);

    printf("now value of n1 using pointer is %d\n", *ptr1);
     printf("now value of n2 using pointer is %d\n", *ptr2);

     printf("%zu\n", sizeof(ptr1));

    
}