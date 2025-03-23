#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    int n, m, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    
    for (int i=1; i<=n; i++) {
        sum += (int) pow(i, m);
    }

    printf("Sum of the series is: %d", sum);

    getch();
    return 0;
}