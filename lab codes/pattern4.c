#include<stdio.h>
int main()
{
    for(int i=4;i>=1;i--)
    {
        for(int space=1;space<=i;space++)
        {
            printf(" ");
        }
        for(int j=4;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}