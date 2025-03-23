#include <stdio.h>
#include <conio.h>

int main() {
    int num, div = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=num; i>=1; i--) {
        if (num % i == 0)
            div++;
    }

    if (div == 2) {
        printf("Number is prime");
    }
    else {
        printf("Number is not prime");
    }

    getch();
    return 0;
}