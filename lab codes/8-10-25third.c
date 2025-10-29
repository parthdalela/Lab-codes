#include<stdio.h>
void point(int *a,int *b);
int main()
{
    int a=5;
    int b=6;
    point(&a,&b);
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}
void point(int *a,int *b )
{
    *a=(*a)*(*a);
    *b=(*b)*(*b);
    printf("%d\n",*a);
    printf("%d\n",*b);
}