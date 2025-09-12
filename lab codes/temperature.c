#include <stdio.h>
float temperature(float temp);
int main()
{ float temp;
 printf(" enter temperature = ");
scanf("%f",&temp); 
temperature(temp);
return 0;
}
float temperature(float temp)
{
  if (temp>=50)
  
  {
    printf("hot");
  }
  else
  {
    printf("cold");
  }
}
 


