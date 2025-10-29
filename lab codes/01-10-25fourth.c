#include<stdio.h>
int ISPRIME(int);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(ISPRIME(i)==1)
        {
            printf("%d\t",i);
        }
        else{
            continue;
        }
    }
    return 0;
}
int ISPRIME(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count<=2)
    {
        return 1;
    }
    else{
        return 0;
    }
}