#include<stdio.h>

int main()
{
   char ch;

   scanf("%c", &ch);

   if(ch>='a' && ch<='f' || ch>='A' && ch<='F' || ch>='0' && ch<='9' )
   {
    printf("is is not an special character!\n");
    return 0;
   }
   else  printf("is is an special character !\n");;

    


}