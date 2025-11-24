#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int chars = 0, words = 0, lines = 0;
    
    printf("Siddharth Koshav - 125113006\n");
    file = fopen("output.txt", "r");
    
    if(file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    while((ch = fgetc(file)) != EOF) {
        chars++;
        
        if(ch == ' ' || ch == '\t' || ch == '\n') {
            words++;
        }
        if(ch == '\n') {
            lines++;
        }
    }
    
    if(chars > 0) {
        words++;
        lines++;
    }
    
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    fclose(file);
    return 0;
}
