#include<stdio.h>
int main()
{
    int a=5;
    float b=4.5;
    char c='A';
    int *ptr=&a;
    *(ptr)++;
    printf("value of address of a after increement = %d\n",*ptr);
    float *ptr1=&b;
     *ptr1++;
    printf("value of address of b after increement = %d\n",ptr1);
    char *ptr2;
     *ptr2++;
    printf("value of address of c after increement is = %d",ptr2);
    return 0;    
}