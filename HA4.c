#include <stdio.h>

int arraySum(int a[], int n) {
    if (n <= 0) {
        return 0;
    }
    
    return a[n - 1] + arraySum(a, n - 1);
}

int main() {
    int n,i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Error: The number of elements should be positive.\n");
        return 1;
    }
    
    int a[n];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int sum = arraySum(a, n);
    
    printf("Sum of the elements in the array is %d.\n", sum);
    
    return 0;
}
