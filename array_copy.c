#include<stdio.h>

int main()
{
 int arr1[5]={1,2,3,4,5};
 int arr2[5]={};



 printf("printing before copy:\n");
 for(int i=0; i<5; i++)
 {
    printf("%d ", arr2[i]);
 }

 for(int i=0; i<5; i++)
 {
    arr2[i]=arr1[i];
 }
printf("\nprinting after copy:\n");
 for(int i=0; i<5; i++)
 {
    printf("%d ", arr2[i]);
 }


}