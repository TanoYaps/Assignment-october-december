#include <stdio.h>

int sumEvenNumbers() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += 2 * i;
    }
    return sum;
}

int main() {
    printf("Sum of first 10 even natural numbers = %d", sumEvenNumbers());
    return 0;
}
