#include<stdio.h>
main()
{
    int a,b,r;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    r=a>b?a:b;
    printf("greatest number:%d",r);
}
