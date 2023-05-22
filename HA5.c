#include <stdio.h>

int sumEvenDigits(int num) {
    if (num == 0) {
        return 0;
    }
    
    int lastDigit = num % 10;
    
    if (lastDigit % 2 == 0) {
        return lastDigit + sumEvenDigits(num / 10);
    } else {
        return sumEvenDigits(num / 10);
    }
}

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    int sum = sumEvenDigits(num);
    
    printf("Sum of even digits in %d is %d.\n", num, sum);
    
    return 0;
}
