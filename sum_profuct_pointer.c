#include<stdio.h>

void operation(int n1, int n2, int *sum, int *product)
{
    int sumd=n1 + n2;

    *sum=sumd;

    int productd= n1 * n2;
    *product=productd;

}

int main()
{
   int n1, n2, sum, product;

   printf("Enter number 1:");
   scanf("%d", &n1);

   printf("Enter number 2:");
   scanf("%d", &n2);

   operation(n1, n2, &sum, &product);

   printf("sum = %d\n", sum);
   printf("Product = %d\n", product);


}