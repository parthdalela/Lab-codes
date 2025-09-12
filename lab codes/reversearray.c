#include<stdio.h>
int main()
{int arr[]={1,2,3,4,5};
    for(int i=0;i<=5;i++)
    {
        int a=arr[i];
        int b=arr[5-i-1];
        arr[i] = b;
        arr[5-i-1]=a;   
        printf(arr[i]); 
    }
   return 0;
}