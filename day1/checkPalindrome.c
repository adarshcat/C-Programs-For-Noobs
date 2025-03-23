#include <stdio.h>
#include <conio.h>

int main() {
    int num, rev = 0, numCopy;

    printf("Enter a number: ");
    scanf("%d", &num);

    numCopy = num;
    while (numCopy != 0) {
        rev = rev*10 + numCopy % 10;
        numCopy /= 10;
    }

    if (num == rev) {
        printf("Number is a palindrome number");
    }
    else {
        printf("Number is not a palindrome number");
    }

    getch();
    return 0;
}