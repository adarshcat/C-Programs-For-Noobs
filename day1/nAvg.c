#include <stdio.h>
#include <conio.h>

int main() {
    int n;
    float sum = 0.0, avg;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        sum += i;
    }

    avg = sum/n;
    printf("Avg of %d numbers is: %f", n, avg);

    getch();
    return 0;
}