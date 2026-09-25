
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = malloc(20);// all the value will be initialized iwth gv
    if(ptr==NULL)
    {
        return 0;
    }
    for(int i=0; i<5; i++)
    {
        scanf("%d", ptr +i );
    }
    printf("After storing\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);
}