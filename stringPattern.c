#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[100];
    int stringLength;

    // take user input
    printf("Enter a string: ");
    scanf("%s", str);

    // find the length of the string
    stringLength = strlen(str);
    
    for (int i=0; i<stringLength; i++) {
        printf("%c ", str[i]);
    }

    printf("\n");

    for (int i=1; i<=stringLength-2; i++) {
        printf("%c", str[i]);
        for (int i=0; i<stringLength*2-3; i++) {
            printf(" ");
        }
        printf("%c\n", str[stringLength-1-i]);
    }

    for (int i=stringLength-1; i>=0; i--) {
        printf("%c ", str[i]);
    }

    
    getch();
    return 0;
}