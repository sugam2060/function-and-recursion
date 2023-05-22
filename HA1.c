#include <stdio.h>

int isPerfectSquare(int n) {
    int sqrtNum = 0;
    
    while (sqrtNum * sqrtNum <= n) {
        if (sqrtNum * sqrtNum == n) {
            return 1;
        }
        sqrtNum++;
    }
    
    return 0;
}

int isFibonacci(int num) {
    if (isPerfectSquare(5 * num * num + 4) || isPerfectSquare(5 * num * num - 4)) {
        return 1;
    }
    
    return 0;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isFibonacci(num)) {
        printf("%d is a Fibonacci number.\n", num);
    } else {
        printf("%d is not a Fibonacci number.\n", num);
    }
    
    return 0;
}