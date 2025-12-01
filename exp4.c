/*
shreeraj pisal
FE Computers
DIV C
UIN 251P041
Roll no.:38
*/
#include <stdio.h>

int isPrime(int n) {
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

void printPrimes(int start, int end) {
    int i;
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printPrimes(start, end);
    return 0;
}
