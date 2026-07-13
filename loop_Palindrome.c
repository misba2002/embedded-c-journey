#include<stdio.h>

int main()
{
    int n, ori_num, rev=0,  sum=0,  l_d ;

    scanf("%d", &n);

    

    ori_num=n;

    do
    {

    rev=0;
    while(n>0)
    {
        l_d=n%10;
        rev=rev*10+l_d;
        n=n/10;
    }
    if(ori_num==rev)
    {
      printf(" palindrome is  Obtained :%d", rev);
      break;  
    }
    sum=ori_num+rev;
    printf("%d + %d is %d\n",ori_num, rev, sum);
    ori_num=sum;     
    n=sum;
    

   }while(ori_num!=rev);

   


    
   
}