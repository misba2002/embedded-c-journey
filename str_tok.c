#include<stdio.h>


char *my_str_stok(char *str1, char *delim)
{
    static  char *ptr ;
    static int i=0;
    if(str1 != NULL)
    {
        ptr = str1;
        i=0;
    }
    

    int start = i;
    for(i;  ptr[i]!= '\0'; i++)
    {
        for(int j=0; delim[j]!='\0'; j++)
        {
            if(ptr[i] == delim[j] )
            {
                 
                if( i!=0 && ptr[i-1] == '\0' )
                {
                    ptr[i]= '\0';
                    start++;
                    break;

                }
                else
                {
                    ptr[i]='\0';
                    i++;
                    return &ptr[start];
                }

            }
        }
    }

    if(ptr[start]!='\0')
    {
        return &ptr[start];
    }
    else
    {
        return NULL;
    }

}
int main()
{
    char str1[100], delim[20];
    printf("Enter the string\n");
    scanf("%[^\n]", str1);

    printf("Enter the delimetr string\n");
    scanf(" %[^\n]", delim);

    char *token = my_str_stok(str1, delim);
    printf("Tokens:");

    while(token)
    {
        printf("%s\n", token);
       token = my_str_stok(NULL, delim);
    }
}