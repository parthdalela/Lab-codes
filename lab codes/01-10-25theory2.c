#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int maths,science,english,hindi,sst;
};
int main()
{
 struct student s1;
 printf("enter your name = ");
 fgets(s1.name,strlen(s1.name),stdin);
 printf("enter your marks for english = ");
 scanf("%d",&s1.english);
 printf("enter your marks for hindi =  ");
 scanf("%d",&s1.hindi);
 printf("enter your marks for maths = ");
 scanf("%d",&s1.maths);
 printf("enter your marks for science = ");
 scanf("%d",&s1.science);
 printf("enter your marks for sst = ");
 scanf("%d",&s1.sst);
 printf("your report card is : \n");
 
}