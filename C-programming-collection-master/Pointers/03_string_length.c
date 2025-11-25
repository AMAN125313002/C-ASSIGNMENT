#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;
    
    printf("AMAN MISHRA - 125313002\n");
    printf("Enter a string: ");
    scanf("%s", str);
    
    ptr = str;
    while(*ptr != '\0') {
        length++;
        ptr++;
    }
    
    printf("Length of string = %d\n", length);
    return 0;
}
