#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int *ptr;
    
    printf("AMAN MISHRA - 125313002\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    ptr = arr;
    printf("Array elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    return 0;
}
