#include<stdio.h>
int main()
{
int arr[10];
printf("enter 10 integers:\n");
for(int i =0;i<10;i++)
{
printf("element %d:",i);
scanf("%d",&arr[i]);
}
printf("\nPositions of even elements:\n");
for (int i =0;i<10;i++){
if (arr[i]%2==0)
{
printf("even element at position:%d\n",i);

}
}

}
