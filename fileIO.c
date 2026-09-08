#include<stdio.h>

int main()
{
    // read the inputs from file
    int num;
    char c;
    float f;
    char str[5];
    
    FILE *fptr = fopen("file.txt", "r");

    if(fptr != NULL)
    {
        fscanf(fptr, "%d %c %f %s", &num, &c, &f ,str);
    

    }
     printf("output = %d %c %f %s\n", num, c, f ,str);

    //  writing in file
     num = 10;
     c = 'A';
     f= 10.5;
    char  str1[6] ="tom";

    FILE *fptr2 = fopen("file2.txt", "w");

    fprintf(fptr2,"hi my name is %s, i got grade %c my average is about %.2f my roll no is %d\n", str1, c, f, num);


    // appending into the existing file
    int num1=20;
    char c1= 'B';
    float f1 = 12.25;

    fclose(fptr2);

    
    fptr2 = fopen("file2.txt", "a");

    fprintf(fptr2,"for my last year \n my name was %s, i got grade %c my average is about %.2f my roll no is %d\n", str1, c1, f1, num1);



} 

    