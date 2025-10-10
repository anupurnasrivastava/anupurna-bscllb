
#include <stdio.h>

int is_leap_year(int year) {
    return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}

int main(void) {
    int month, year, days;
    int c;

    printf("Enter month number (1-12): ");
    while (scanf("%d", &month) != 1 || month < 1 || month > 12) {
        printf("Invalid input. Please enter an integer between 1 and 12: ");

        while ((c = getchar()) != '\n' && c != EOF) { }
    }

    if (month == 2) {
        printf("Enter year (e.g. 2025): ");
        while (scanf("%d", &year) != 1 || year < 1) {
            printf("Invalid year. Enter a positive integer for year: ");
            while ((c = getchar()) != '\n' && c != EOF) { }
        }
        days = is_leap_year(year) ? 29 : 28;
        printf("February %d has %d days.\n", year, days);
    } else {
        switch (month) {
            case 1:  days = 31; break;
            case 3:  days = 31; break;
            case 4:  days = 30; break;
            case 5:  days = 31; break;
            case 6:  days = 30; break;
            case 7:  days = 31; break;
            case 8:  days = 31; break;
            case 9:  days = 30; break;
            case 10: days = 31; break;
            case 11: days = 30; break;
            case 12: days = 31; break;
            default: days = 0; break;
        }
        printf("Month %d has %d days.\n", month, days);
    }


}
