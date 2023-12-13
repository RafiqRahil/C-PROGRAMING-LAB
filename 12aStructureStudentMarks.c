#include <stdio.h>
struct Student {
    char name[50];
    int marks[5]; // Assuming there are 5 subjects
    int totalMarks;
};
void main() {
    int numSt;
    printf("Enter the number of students: ");
    scanf("%d", &numSt);
    struct Student students[numSt];
    for (int i = 0; i < numSt; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        students[i].totalMarks = 0;
        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; ++j) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].totalMarks += students[i].marks[j];
        }
    }
    printf("\nTotal marks for each student:\n");
    for (int i = 0; i < numSt; ++i) {
        printf("%s: %d\n", students[i].name, students[i].totalMarks);
    }
}
