#include<stdio.h>

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("even numbers from 1 to %d are:\n",n);

    for(int i=1;i<=n;i++)
        {
    if(i%2==0)
    {
        printf("%d\n",i);
    }
    }
}
