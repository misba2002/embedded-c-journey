#include<stdio.h>

int main()
{
    int amount;
    float rate_of_intrest,simple_Intrest,time;

    printf("Enter principal amount , rate_of_intrest, year time: ");
    scanf("%d%f%f", &amount, &rate_of_intrest, &time);

    simple_Intrest=(amount*rate_of_intrest*time)/100;

    printf("Simple Intrest is: %.2f\n", simple_Intrest);

    return 0;

}