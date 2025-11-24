#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    printf("Siddharth Koshav - 125113006\n");
    file = fopen("output.txt", "r");
    
    if(file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("File contents:\n");
    while((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    
    fclose(file);
    return 0;
}
