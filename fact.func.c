#include<stdio.h>

int facto(int number)
{
    int product=1;
    for(int i=1; i<=number; i++)
    {
        product= product * i;

    }
    return product; 

}

int main()
{
    int num;

    printf("Enter number:");
    scanf("%d", &num);

    int res=facto(num);

    printf("Factorial of %d is %d \n", num, res);
}
