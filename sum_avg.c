#include<stdio.h>

void avg_sum(int n1,int  n2 ,int n3 , int *sum, float  *avg);

int main()
{
    int n1, n2, n3, sum;
    float avg;

    printf("Enter three values n1, n2, n3: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    avg_sum(n1, n2, n3, &sum, &avg);

    printf("Sum is %d\nAverage is %g\n", sum, avg);
}

 void avg_sum(int num1, int  num2,  int num3, int *sum1, float *avg1)
{
    *sum1=num1 + num2 + num3;
    *avg1= *sum1 / 3.0 ;
}