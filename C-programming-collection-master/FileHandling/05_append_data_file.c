#include <stdio.h>

int main() {
    FILE *file;
    char text[100];
    
    printf("Siddharth Koshav - 125113006\n");
    file = fopen("output.txt", "a");
    
    if(file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    
    fprintf(file, "%s", text);
    fclose(file);
    
    printf("Text appended successfully!\n");
    return 0;
}
