#include<stdio.h>
void print1();
void print2();
void print3();
void print4();
void print5();
int main()
{
   print1();
   print2();
   print3();
   print4();
   print5();
   return 0;
}
void print1()
{
    int i=1;
    printf("%d\n",i++);
    printf("%d\n",i);
    printf("%d\n",++i);
    printf("%d\n",i);
}
void print2()
{
    int i=1;
    i++;
    printf("%d\n",i);
    ++i;
    printf("%d\n",i);
}
void print3()
{
    int i=1;
    printf("%d\n%d\n%d\n%d\n",i,++i,i++,i);
}
void print4()
{
    int i=1;
    printf("%d\n%d\n%d\n%d\n",++i,i++,++i,i);
}
void print5()
{
    int i=1;
    printf("%d\n%d\n%d\n%d\n",i++,i++,i++,i);
}