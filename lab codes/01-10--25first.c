#include<stdio.h>
int FACT(int);
int FACT2(int);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d",&n);
    printf("FACTORIAL FROM RECURSIVE FUNCTION = %d\n",FACT(n));
    printf("FACTORIAL FROM NON RECURSIVE FUNCTION = %d",FACT2(n));
    return 0;
}
int FACT(int n) //recursive function
{
    if(n==0)
    {
        return 1;
    }
    int a=FACT(n-1);
    int fact=a*n;
    return fact;
}
int FACT2(int num)
{
    int i,prod=1;
    for(i=1;i<=num;i++)
    {
        prod=prod*i;
    }
    return prod;
}