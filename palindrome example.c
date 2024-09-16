#include <stdio.h>

int isPalindrome(int num) {
    // Negative numbers are not palindromes
    if (num < 0) {
        return 0;
    }

    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;  // Get the last digit
        reversedNum = reversedNum * 10 + digit;  // Build the reversed number
        num /= 10;  // Remove the last digit from num
    }

    return originalNum == reversedNum;
}

int main() {
    int numbers[] = {121, -121, 12321, 10, 123456};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        if (isPalindrome(numbers[i])) {
            printf("%d is a palindrome.\n", numbers[i]);
        } else {
            printf("%d is not a palindrome.\n", numbers[i]);
        }
    }

    return 0;
}