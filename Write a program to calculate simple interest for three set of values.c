#include <stdio.h>

int main() {
    float principal, rate, time, interest;
    int i;

    for (i = 1; i <= 3; i++) {
        printf("Set %d:\n", i);
        printf("Enter principal amount: ");
        scanf("%f", &principal);
        printf("Enter rate of interest (in %%): ");
        scanf("%f", &rate);
        printf("Enter time (in years): ");
        scanf("%f", &time);

        interest = (principal * rate * time) / 100.0;

        printf("Simple interest for set %d = %.2f\n\n", i, interest);
    }


}
