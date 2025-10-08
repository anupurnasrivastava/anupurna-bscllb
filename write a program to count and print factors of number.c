#include<stdio.h>
int main()
{
int num,count=0;
printf("enter a positive number:");
scanf("%d",&num);

if(num<=0)
{
printf("please enter a positive number.\n");

}
printf("factors of %d are:",num);

for (int i=1;i<=num;++i)

{
if(num%i==0)

{
printf("%d",i);
count++;

}

}
printf("\ntotal number of factors:%d\n",count);
}
