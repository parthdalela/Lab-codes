#include<stdio.h>
int GCD(int a,int b);
int main()
{
    int n1,n2;
    printf("enter first number  = ");
    scanf("%d",&n1);
    printf("enter second number = ");
    scanf("%d",&n2);
    if(n1>n2)
    {
        for(int i=n2;i>=1;i--)
        {
            if(n1%i==0&&n2%1==0)
            {
                printf("GCD is = %d",i);
                break;
            }
        }
    }
    else
    {
         for(int i=n1;i>=1;i--)
        {
            if(n1%i==0&&n2%1==0)
            {
                printf("GCD is = %d",i);
                break;
            }
        }
    }
    return 0;
}