#include <stdio.h>
#include <conio.h>

int main() {
    int num, sum = 0, numCopy;

    printf("Enter a number: ");
    scanf("%d", &num);

    numCopy = num;
    while (numCopy != 0) {
        int digit = numCopy % 10;
        int fact = 1; 
        for (int i=digit; i>=1; i--) {
            fact *= i;
        }

        sum += fact;
        numCopy /= 10;
    }

    if (num == sum) {
        printf("Number is a strong/krishnamurthy number");
    }
    else {
        printf("Number is not a strong/krishnamurthy number");
    }

    getch();
    return 0;
}