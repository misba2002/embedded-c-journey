#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,2};

    int first=-1, last=-1;

    int key=2;

    for(int i=0; i<5; i++)
    {
        if(key==arr[i])
        {
            if(first==-1)
            {
                first=0;
                first=i;
            }
            last=i;
        }
    }
    if(first==-1)
    {
        printf("Elemnt is not present in the array ");
    }
    else
    {
        printf("%d is first found at index %d\n",key, first);
        printf("%d is last found at index %d\n",key, last);
    }
}