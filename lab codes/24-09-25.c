#include<stdio.h>
int main()
{ int p,q,m,n;
    printf("enter the no. of rows in first matrix = ");
    scanf("%d",&p);
     printf("enter the no. of columns in first matrix = ");
    scanf("%d",&q);
     printf("enter the no. of rows in second  matrix = ");
    scanf("%d",&m);
     printf("enter the no. of columns in second matrix = ");
    scanf("%d",&n);
    if(q!=m)
    {
        printf("multiplication not possible");
    }
    else{

    int arr1[p][q],arr2[m][n],arr3[p][n];
    
    printf("enter the elements of matrix 1 = ");
    
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=q;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    } printf("matrix 1 : \n");
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=q;j++)
        {
            printf("%d\t",arr1[i][j]);
        }printf("\n");
    }
    printf("enter the elements of matrix 2 = ");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    } printf("matrix 2: \n");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d\t",arr1[i][j]);
        }printf("\n");
    }
      for(int i=1;i<=p;i++)
    {   int sum=0,e=0;
        for(int j=1;j<=n;j++)
        { 
           sum+=arr1[i][j]*(int)arr2[j,i];
        }
        arr3[i][e]=sum;
        e++;
    }
      for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}