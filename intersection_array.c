#include<stdio.h>

int main()
{
    int sizeA;

    printf("Enter sizeA: ");
    scanf("%d", &sizeA);

    int arrA[sizeA];

    printf("Enter the array A elements:");
    for(int i=0; i<sizeA; i++)
    {
        scanf("%d", &arrA[i]);
    }

    int sizeB;

    printf("Enter the size of B array:");
    scanf("%d", &sizeB);

    int arrB[sizeB];

    printf("Enter the elements of array B:");
    for(int i=0; i<sizeB; i++)
    {
        scanf("%d", &arrB[i]);
    }


   int total_index=sizeA+sizeB;
   int res_arr[total_index];
   int res_index=0, flag=1;

   for(int i=0; i<sizeA; i++)
   {
    flag=1;
    for(int j=0; j<sizeB; j++)
    {
        if(arrA[i]==arrB[j])
        {
            for(int k=0; k<res_index; k++)
            {
                if(arrA[i]==res_arr[k])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                res_arr[res_index++]=arrA[i];
                break;
            }
        }

    }
   }

   if(res_index==0)
   {
    printf("No common elemnet found!");
    return 0;
   }

   printf("Intersection of array A and array B is :");
   for(int k=0; k<res_index; k++)
   {
    printf("%d ", res_arr[k]);
   }
   printf("\n");



}