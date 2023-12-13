#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
int main() {
    FILE *file;
    struct Student student;
    file = fopen("student_data.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Enter student details:\n");
    for (int i = 0; i < 2; i++) { 
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Roll Number: ");
        scanf("%d", &student.rollNumber);
        printf("Marks: ");
        scanf("%f", &student.marks);
        fprintf(file, "%s %d %.2f\n", student.name, student.rollNumber, student.marks);
    }
    fclose(file);
    file = fopen("student_data.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nStudent details stored in the file:\n");
    printf("Name\tRoll Number\tMarks\n");
    while (fscanf(file, "%s %d %f", student.name, &student.rollNumber, &student.marks) != EOF) {
        printf("%s\t%d\t\t%.2f\n", student.name, student.rollNumber, student.marks);
    }
    fclose(file);
    return 0;
}
