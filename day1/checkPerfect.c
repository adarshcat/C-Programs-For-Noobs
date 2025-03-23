#include <stdio.h>
#include <conio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=1; i<num; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num) {
        printf("Number is a perfect number");
    }
    else {
        printf("Number is not a perfect number");
    }

    getch();
    return 0;
}