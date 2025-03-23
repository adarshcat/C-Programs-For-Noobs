#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    int num, sum = 0, numCopy, numLen;

    printf("Enter a number: ");
    scanf("%d", &num);

    numLen = (int) log10(num) + 1;

    numCopy = num;
    while (numCopy != 0) {
        sum += (int) pow(numCopy % 10, numLen);
        numCopy /= 10;
    }

    if (num == sum) {
        printf("Number is an armstrong number");
    }
    else {
        printf("Number is not an armstrong number");
    }

    getch();
    return 0;
}