#include <stdio.h>
#include <conio.h>

typedef struct Cricket {
    char name[100];
    int run;
} Cricket;

int main() {
    Cricket cricketer[2];

    for (int i=0; i<2; i++) {
        printf("Enter the name of cricketer %d: ", i+1);
        gets(cricketer[i].name);
        printf("Enter the runs of cricketer %d: ", i+1);
        scanf("%d", &cricketer[i].run);

        printf("\n");
        getchar();
    }

    float totalRuns = 0.0;
    for (int i=0; i<2; i++) {
        totalRuns += cricketer[i].run;
    }

    printf("The total runs scored by the cricketers are: %f", totalRuns);

    getch();
    return 0;
}
/* OUTPUT

Enter the name of cricketer 1: a
Enter the runs of cricketer 1: 67

Enter the name of cricketer 2: b
Enter the runs of cricketer 2: 33

The total runs scored by the cricketers are: 100.000000

*/