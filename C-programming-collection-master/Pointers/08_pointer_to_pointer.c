#include <stdio.h>

int main() {
    int num = 10;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    
    printf("AMAN MISHRA - 125313002\n");
    printf("Value of num = %d\n", num);
    printf("Value using ptr1 = %d\n", *ptr1);
    printf("Value using ptr2 = %d\n", **ptr2);
    
    printf("Address of num = %p\n", &num);
    printf("Address stored in ptr1 = %p\n", ptr1);
    printf("Address stored in ptr2 = %p\n", ptr2);
    
    return 0;
}
