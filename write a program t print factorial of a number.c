#include<stdio.h>
int main()
{
int num;
unsigned long long factorial=1;
printf("enter a positive integer:");
scanf("%d",&num);
if(num<0)
{
printf("factorial is not defined for negative numbers.\n");
}
else{
for (int i=1;i<=num;++i)
{
factorial*=i;

}
printf ("factorial of %d =%llu\n",num,factorial);

}

}


