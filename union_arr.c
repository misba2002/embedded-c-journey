#include<stdio.h>

int main()
{
  int sizeA, sizeB;
  
  printf("Enter the size of the array A:");
  scanf("%d", &sizeA);

  int arrA[sizeA];

  printf("Enter the elements of the array A:");
  for(int i=0; i<sizeA; i++ )
  {
    scanf("%d", &arrA[i]);
  }

 printf("Enter the size of the array B:");
  scanf("%d", &sizeB);

  int arrB[sizeB];

   printf("Enter the elements of the array B:");
  for(int i=0; i<sizeB; i++ )
  {
    scanf("%d", &arrB[i]);
  }

  int union_arr[sizeA+sizeB], u_index=0, union_index=sizeA+sizeB, res_arr[union_index], res_index=0;
 
for(int i=0; i<sizeA ; i++)
{
    union_arr[u_index++]=arrA[i];
}


for(int i=0; i<sizeB ; i++)
{
    union_arr[u_index++]=arrB[i];
}

// 
printf("After merging array:");
for(int z=0; z<union_index; z++) printf("%d ", union_arr[z]);

printf("\n");


for(int j=0; j<union_index; j++)
{
    for(int k=0; k<union_index-j-1; k++)
    {
        if(union_arr[k]>union_arr[k+1])
        {
            int temp=union_arr[k];
            union_arr[k]=union_arr[k+1];
            union_arr[k+1]=temp;
        }
    }
}

// 
printf("After sorting array:");
for(int z=0; z<union_index; z++) printf("%d ", union_arr[z]);

printf("\n");

for(int i=0; i<union_index; i++)
{
    while(i<=union_index-2 && union_arr[i]==union_arr[i+1])
    {
        i++;
    }
    res_arr[res_index++]=union_arr[i];



}

printf("Resulting union array is:");
for(int i=0; i<res_index; i++)
printf("%d ",res_arr[i]);

printf("\n");





}