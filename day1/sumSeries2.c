#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            sum += j;
        }
    }

    printf("Sum of the series is: %d", sum);

    getch();
    return 0;
}