#include<stdio.h>
void main()
{
int var1,var2,result;
float div;
printf("Enter the value of first variable");
scanf("%d",&var1);
printf("Enter the value of second variable");
scanf("%d",&var2);
result=var1+var2;
printf("Sum of %d&%d=%d\n",var1,var2,result);
printf("Diff of %d&%d=%d\n",var1,var2,var1-var2);
printf("product of%dand%d=%d\n",var1,var2,var1*var2);
div=var1/var2;
printf("Div of %d&%d=%f",var1,var2,div);
}
