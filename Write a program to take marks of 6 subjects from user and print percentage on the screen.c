#include<stdio.h>
int main()
{
    int marks[6];
    int i,total=0;
    float percentage;

    printf("Enter marks for 6 subjects (out of 100):\n");
    for(i=0;i<6;i++){
        printf("Subject %d:",i+1);
        scanf("%d",&marks[i]);

        if(marks[i]<0||marks[i]>100)
        {
            printf("Invalid input.Marks should be between 0 and 100.\n");
        }
        total+=marks[i];

}
percentage=(float)total/6;
printf("total marks : %d\600\n",total);
printf("percentage:%.2f%%\n",percentage);
        }
