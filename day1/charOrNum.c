#include <stdio.h>
#include <conio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 48 && c < 58) {
        printf("Symbol is a number");
    }
    else {
        printf("Symbol is a character");
    }

    getch();
    return 0;
}