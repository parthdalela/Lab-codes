// programme to input the name and number of user
#include <stdio.h>
int main()
{ char name[5];int number[10];
  printf("Enter your name = "); 
  scanf("%s",&name);
  for(int i=0;i<=10;i++)
  {
    printf("Enter your phone number digit = ");
    scanf("%d",&number[i]);
  }
  printf("Name of the user is = %s \n",name);
 for(int j=0;j<10;j++)
 {
    printf(number);
 }
  return 0;
}