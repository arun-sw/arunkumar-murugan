#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct student
{
    int rollno;
    char name[25];
    char grate;
int sub1,sub2,sub3,sub4,sub5;
float avg;
}s;

int main()
{
struct student s[2];
int i,avg,total=0, marks[5];
    printf("enter the student roll no:");
    scanf("%d",&s[2].rollno);
    printf("enter the student name:");
    scanf("%s",&s[2].name);
    printf("enter the student mark\n");
    printf("enter the sub %d:",i+1);
    scanf("%d",&s[2].sub1);
    printf("enter the sub %d:",i+1);
    scanf("%d",&s[2].sub2);
    printf("enter the sub %d:",i+1);
    scanf("%d",&s[2].sub3);
    printf("enter the sub %d:",i+1);
    scanf("%d",&s[2].sub4);
    printf("enter the sub %d:",i+1);
    scanf("%d",&s[2].sub5);
    printf("\tSTUTENT MARKSHEET\n");
    printf("student roll no:%d\n",s[2].rollno);
    printf("student name :%s\n",s[2].name);
    total=s[2].sub1+s[2].sub2+s[2].sub3+s[2].sub4+s[2].sub5;
    printf("total marks %d\n",total);
    avg=total/5;
    printf("avg mark:%d\n",avg);

    return 0;
}
