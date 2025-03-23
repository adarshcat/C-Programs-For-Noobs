#include <stdio.h>
#include <conio.h>

int main() {
    char c;

    printf("Enter the character: ");
    scanf("%c", &c);

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || 'c' == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || 'c' == 'u') {
        printf("Character %c is a vowel", c);
    }
    else {
        printf("Character %c is a consonant", c);
    }

    getch();
    return 0;
}