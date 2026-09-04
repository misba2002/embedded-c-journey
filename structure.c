#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    char grade;
};

void read_and_print(struct student s)
{
    printf("Enter the roll no:");
    scanf("%d", &s.rollno);
     printf("Enter the name:");
    scanf(" %s", s.name);
     printf("Enter the grade:");
    scanf(" %c", &s.grade);

    printf("%d\n%s\n%c\n",s.rollno, s.name, s.grade);

}
int main()
{
    struct student s;
    read_and_print(s);
}