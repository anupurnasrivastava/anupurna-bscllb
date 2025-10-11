#include <stdio.h>

int main()
 {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);


    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }


    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The character '%c' is a vowel.\n", ch);
            break;
        default:

            if (ch >= '0' && ch <= '9') {
                printf("The character '%c' is a digit.\n", ch);
            } else if ((ch >= 'a' && ch <= 'z')) {
                printf("The character '%c' is a consonant.\n", ch);
            } else {
                printf("The character '%c' is neither a vowel, consonant, nor digit.\n", ch);
            }
    }


}
