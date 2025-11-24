#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    
    printf("Siddharth Koshav - 125113006\n");
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    
    printf("\nStudent Details:\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
    
    return 0;
}
