#include <stdio.h>

void factorial() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial not defined\n");
    else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial = %llu\n", fact);
    }
}
