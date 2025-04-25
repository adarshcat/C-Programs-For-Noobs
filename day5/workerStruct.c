#include <stdio.h>
#include <conio.h>

typedef struct Worker {
    char name[100];
    int age;
    float salary;
} Worker;

int main() {
    Worker workers[2];

    for (int i=0; i<2; i++) {
        printf("Enter the name of worker %d: ", i+1);
        gets(workers[i].name);
        printf("Enter the age of worker %d: ", i+1);
        scanf("%d", &workers[i].age);
        printf("Enter the salary of worker %d: ", i+1);
        scanf("%f", &workers[i].salary);

        printf("\n");
        getchar();
    }

    float totalSalary = 0.0;
    for (int i=0; i<2; i++) {
        totalSalary += workers[i].salary;
    }

    printf("The total salary of the workers are: %f", totalSalary);

    getch();
    return 0;
}

/* OUTPUT

Enter the name of worker 1: a
Enter the age of worker 1: 19
Enter the salary of worker 1: 12000

Enter the name of worker 2: b
Enter the age of worker 2: 56
Enter the salary of worker 2: 20

The total salary of the workers are: 12020.000000

*/