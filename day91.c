#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Read student data
    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Print student data
    printf("\nStudent Details:\n");
    printf("Name     : %s\n", s.name);
    printf("Roll No. : %d\n", s.roll_no);
    printf("Marks    : %.2f\n", s.marks);

    return 0;
}
