#include<stdio.h>

int main()
{
    int sizeA, sizeB, index_EvenA1, index_EvenA2, indexA_odd, indexB_odd, index_EvenB1, index_EvenB2, temp;
    float mA, mB, mAB;

    printf("Enter size of array A:");
    scanf("%d", &sizeA);

    int arrA[sizeA];

    printf("Enter elements of array A:");
    for(int i=0; i<sizeA; i++)
    {
        scanf("%d", &arrA[i]);
    }

    printf("Enter size of array B:");
    scanf("%d", &sizeB);

    int arrB[sizeB];

     printf("Enter elements of array B:");
    for(int i=0; i<sizeB; i++)
    {
        scanf("%d", &arrB[i]);
    }

    
    printf("\nsize of array a is %d", sizeA);
    printf("\nsize of array b is %d\n", sizeB);



    // SORTING ARRAY_A AND ARRAY_B;
     for(int i=0; i<sizeA-1; i++)
    {
        for(int j=0; j<sizeA-i-1; j++)
        {
            if(arrA[j]>arrA[j+1])
            {
                 temp=arrA[j];
                 arrA[j]=arrA[j+1];
                 arrA[j+1]=temp;
            }
        }
    }

    printf("\nPrinting sorted array a:\n");
    for(int i=0; i<sizeA; i++)
    {
        printf("%d ",arrA[i]);
    }
    

    for(int i=0; i<sizeB-1; i++)
    {
        for(int j=0; j<sizeB-i-1; j++)
        {
            if(arrB[j]>arrB[j+1])
            {
                 temp=arrB[j];
                 arrB[j]=arrB[j+1];
                 arrB[j+1]=temp;
            }
        }
    }

    printf("\nPrinting sorted array b:\n");
     for(int i=0; i<sizeB; i++)
    {
        printf("%d ",arrB[i]);
    }


    // FINDING OUT  MEDIAN IN ARRAY_A AND ARRAY_B RESPECTIVELY;
    if(sizeA%2==0)
    {
        index_EvenA1=sizeA/2;
        index_EvenA2=(sizeA/2)-1;

        printf("\ntwo median are %d, %d\n",arrA[index_EvenA1], arrA[index_EvenA2]);

        mA=(arrA[index_EvenA1]+arrA[index_EvenA2])/2.0;
    }
    else
    {
         indexA_odd=sizeA/2;
         printf("\n%d is the media index of array 1\n",indexA_odd);
         mA=arrA[indexA_odd];
    }
    if(sizeB%2==0)
    {
        index_EvenB1=sizeB/2;
        index_EvenB2=(sizeB/2)-1;

        printf("\ntwo median are %d, %d\n",arrB[index_EvenB1], arrB[index_EvenB2]);

        mB=(arrB[index_EvenB1]+arrB[index_EvenB2])/2.0;

        

    }
    else
    {
        indexB_odd=(sizeB)/2;
        printf("\n%d is the media index of array b\n",indexA_odd);

        mB=arrB[indexB_odd];
    }

    // FINDING TOTAL MEDIAN =MEDIAN_A +MEDIAN_B DIVIDE IT BY 2;

    mAB=(mA+mB)/2.0;

    printf("Median of array_a is %.1f\n", mA);
    printf("Median of array_b is %.1f\n", mB);
    printf("Median of array_a and array_b is %.2f\n", mAB);

   

    




}