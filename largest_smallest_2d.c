#include<stdio.h>
int main()
{
    int arr[2][3];

    int sum=0;
    printf("Enter elements: ");

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // printf("2D array elements are:");
    int smallest = arr[0][0];
    int largest = arr[0][0];

    // for(int i=0; i<2; i++)
    // {
    //     sum=0;
    //     for(int j=0; j<3; j++)

    //     {
    //         sum = sum + arr[i][j];
    //     }
    //     printf("sum of %dth  indexed array is %d\n", i, sum);

    // }

    // printf("Sum of elements of 2d array is %d\n", sum);


    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(smallest > arr[i][j])
            {
                smallest = arr[i][j];
            }

            if(largest < arr[i][j])
            {
                largest = arr[i][j];
            }
        }
    }

    printf("largest element is %d\n", largest);
    printf("smallest value is %d\n", smallest);


}