#include<stdio.h>
int main()
{
int num,i;
printf("enter a number");
scanf("%d",&num);
if(num<=1)
{
printf("%d is not a prime number\n",num);
}
for(i=2;i<=num;i++)
{
if (num%i==0)
{

    break;
}
}

printf("%d is a prime number\n",num);

printf("%d is not a prime number\n",num);




}
