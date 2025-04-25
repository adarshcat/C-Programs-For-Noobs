#include <stdio.h>
#include <conio.h>

typedef struct Student {
    char name[100];
    int age;
    float marks;
} Student;

int main() {
    Student students[2];

    for (int i=0; i<2; i++) {
        printf("Enter the name of student %d: ", i+1);
        gets(students[i].name);
        printf("Enter the age of student %d: ", i+1);
        scanf("%d", &students[i].age);
        printf("Enter the marks of student %d:", i+1);
        scanf("%f", &students[i].marks);

        printf("\n");
        getchar();
    }

    float totalMarks = 0.0;
    for (int i=0; i<2; i++) {
        totalMarks += students[i].marks;
    }

    printf("The average marks of the students are: %f", totalMarks/2);

    getch();
    return 0;
}

/* OUTPUT

Enter the name of student 1: a
Enter the age of student 1: 19
Enter the marks of student 1:67

Enter the name of student 2: b
Enter the age of student 2: 20
Enter the marks of student 2:98

The average marks of the students are: 82.500000

*/