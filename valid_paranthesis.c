#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isValid(char* s) {

    int len=strlen(s);
    if(len%2!=0)
    {
        return false;
    }
   
    int arr[len],count=0;

      if(s[0]==')' || s[0]=='}' || s[0]==']')
      {
        count=1;
        return count==0;
      }
    
    for(int i=0; i<len;i++ )
    {
      

        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            arr[count++]=s[i];
            
        }
        if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(count == 0)
            {
                return false;
            }
            if((arr[count-1]=='(' && s[i]==')') ||
                (arr[count-1]=='{' && s[i]=='}') ||
                (arr[count-1]=='[' && s[i]==']'))
            {
            count--;
            }
            else
            {
              return false;

            }
        }
        
        
     
      

    }

    return count==0;
    
    
    
}
int main()
{
    char str[100];
    printf("Enter string:");
    scanf("%s", str);
    int res=isValid(str);
    if(res==1)
    {
        printf("Valid parenthesis\n");
    }else printf("Invalid parenthesis\n");

}