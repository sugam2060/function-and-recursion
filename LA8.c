#include <stdio.h>

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    
    return 1 + countDigits(n / 10);
}

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }
    
    int digitCount = countDigits(n);
    
    printf("Number of digits in %d is %d.\n", n, digitCount);
    
    return 0;
}