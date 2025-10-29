#include<stdio.h>
int main()
{
    int a=1;
    float b=3.14;
    char c='A';
    int *ptr=&a;
    float *ptr1=&b;
    char *ptr2=&c;
    printf("the value of int a is =%d and pointer is =%d\n",*ptr,ptr);
    printf("the value of float b is =%f and pointer is =%d\n",*ptr1,ptr1);
    printf("the value of char c is =%c and pointer is =%d",*ptr2,ptr2);
    return 0;
}
