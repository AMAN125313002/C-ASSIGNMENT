#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Siddharth Koshav - 125113006\n");
    printf("Enter value of N: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }
    
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}