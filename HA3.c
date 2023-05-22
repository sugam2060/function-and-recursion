#include <stdio.h>

int findGCD(int a, int b) {
    int temp;
    
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int findLCM(int a, int b) {
    int gcd = findGCD(a, b);
    int lcm = (a * b) / gcd;
    
    return lcm;
}

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    int lcm = findLCM(a, b);
    
    printf("The LCM of %d and %d is %d.\n", a, b, lcm);
    
    return 0;
}