#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int num;

    // Prompt user for input
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    printf("\n--- Classification Results ---\n");

    // 1. Determine whether it is positive, negative, or zero
    if (num > 0) {
        printf("1. Sign: Positive\n");
    } else if (num < 0) {
        printf("1. Sign: Negative\n");
    } else {
        printf("1. Sign: Zero\n");
    }

    // 2. Determine whether it is even or odd
    // The modulo operator (%) correctly handles negative numbers in modern C standards
    if (num % 2 == 0) {
        printf("2. Parity: Even\n");
    } else {
        printf("2. Parity: Odd\n");
    }

    // 3. Determine whether it is divisible by 3, 5, or both
    if (num % 3 == 0 && num % 5 == 0) {
        printf("3. Divisibility: Divisible by both 3 and 5\n");
    } else if (num % 3 == 0) {
        printf("3. Divisibility: Divisible by 3\n");
    } else if (num % 5 == 0) {
        printf("3. Divisibility: Divisible by 5\n");
    } else {
        printf("3. Divisibility: Not divisible by 3 or 5\n");
    }

    // 4. Absolute value handling integer limits correctly
    // If num is INT_MIN (e.g., -2147483648), its absolute value overflows a regular int.
    // Casting to 'long long' safely accommodates the value before stripping the negative sign.
    long long abs_value = (long long)num;  //casting, INT_MIN to long long
    if (abs_value < 0) {
        abs_value = -abs_value;
    }
    
    printf("4. Absolute Value: %lld\n", abs_value);
    if (num == INT_MIN) {
        printf("   (Note: Managed safely. %d is INT_MIN, which requires widening to prevent overflow.)\n", num);
    }

    return 0;
}




