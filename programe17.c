#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Check if original and reversed numbers are same
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
