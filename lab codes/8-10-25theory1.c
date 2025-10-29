// returning structure objects
#include<stdio.h>
struct Student display(struct Student);
struct Student
{
    int rollno;
    char name[50];
};
struct Student display(struct Student s)
{
    printf("%d\n",s.rollno);
    s.rollno=59;
    printf("%d",s.rollno);
}
void main()
{
    struct Student s1,s2,*ptr;
    s1.rollno=57;
    s2=display(s1);
    ptr=&s1;
    printf("%d",++((*ptr).rollno));  
}