#include<stdio.h>

void remove_space(char *arr, int size)
{
    int count = 0;

    
    for(int i=0; i<size-count; i++)
    {
        if(arr[i] == ' ' && arr[i+1] == arr[i])
        {
            while(i+1<size-count && arr[i+1] == ' ' )
            {
                for(int j=i+1; j<size-1-count; j++)
                {
                  arr[j]=arr[j+1];
                }
                count++;
               
               
            }
        }

    }

   int end_index = size-count;
   arr[end_index] = '\0';
   printf("%s", arr);
   
}
int count_length(char *arr)
{
    int i=0, count=0;
    while(arr[i] != '\0')
    {
       count++; 
       i++;
    }
    return count;
}

int main()
{
    char str[100];

    printf("Enter string:");
    scanf("%[^\n]", str);

    int length = count_length(str);

    remove_space(str, length);



    
}