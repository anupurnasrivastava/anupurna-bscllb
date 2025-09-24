#include<stdio.h>
int main()
{
  int n;
  printf("enter the no.");
  scanf("%d",&n);

  if(n%5==0)
  {
    if(n%3==0)
    {
     printf("\n the %d is divisible by both 3 and 5");

    }

  }
  else
  {
   printf("  not divisible by both 3 and 5");
  }
}

