#include<stdio.h>
#include<string.h>
Reverse(char str[]);
int main()
{
    char str[50];
    printf("enter a string = ");
    fgets(str,50,stdin);
    Reverse(str);
}
Reverse(char str[])
{
    int a=strlen(str);
    for(int i=0;i<=a;i++)
    {
        char temp=str[a-i-1];
        str[a-i-1]=str[i];
        str[i]=temp;
    }
}