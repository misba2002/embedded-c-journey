#include<stdio.h>
int count_length(char *array)
{
    int i=0, count = 0;
    while(array[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
    
}

int return_length(char *arr)
{
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i] == ' ')
        {
            arr[i] = '\0';
        }
    }

  int res_length = count_length(arr);

  return res_length;
}

int main()
{
    char str[50];

    printf("Enter the string:");
    scanf("%[^\n]", str);

    int len = return_length(str);

    printf("You entered %s and the length is %d\n", str, len);
}