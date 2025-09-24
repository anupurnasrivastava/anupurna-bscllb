#include<stdio.h>
int main()
{

char ch;
printf ("enter a character");
scanf("%c",&ch);

switch(ch)
{
case'a':case'A':
printf("Vowel:A\n");
break;
case'e':case'E':
printf("Vowel:E\n");
break;
case'i':case'I':
printf("Vowel:I\n");
break;
case'o':case'O':
printf("Vowel:O\n");
break;
case'u':case'U':
printf("vowel:U\n");
    break;
default:
    printf("not a vowel\n");
}
}
