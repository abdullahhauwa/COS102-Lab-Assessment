
#include <stdio.h>

int main() {
    int number;
    int original;
    int reversed = 0;
    int digit;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    original = number;

    if (number < 0) {
        printf("%d is NOT a palindrome number.\n", number);
        return 0;
    }

    // Reverse the number one digit at a time.
    while (number > 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    // Compare the original and reversed numbers.
    if (original == reversed) {
        printf("%d is a PALINDROME number.\n", original);
    } else {
        printf("%d is NOT a palindrome number.\n", original);
    }

    return 0;
}
