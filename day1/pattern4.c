#include <stdio.h>
#include <conio.h>

int main() {
    int n, counter = 1;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }

    getch();
    return 0;
}