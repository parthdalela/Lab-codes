#include<stdio.h>
#include<string.h>
struct student 
{
    char name[50];
    int sapid;
};
int main()
{
    struct student s1;
char str[50];
printf("enter your sapid = ");
scanf("%d",&s1.sapid);
printf("enter your name = ");
fgets(s1.name,strlen(s1.name),stdin);
printf("%s",s1.name);
printf("%d",s1.sapid);
return 0;
}