#include <stdio.h>

int isPalindrome(int n) {
    int originalNumber = n;
    int reversedNumber = 0;

    while (n > 0) {
        int remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    return (reversedNumber == originalNumber);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}