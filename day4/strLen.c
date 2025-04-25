#include <stdio.h>
#include <conio.h>

int main() {
    char str[100];

    printf("Enter the string: ");
    gets(str);

    int i = 0;
    while (str[i] != '\0'){
        i++;
    }

    printf("The length of the string is %d", i);

    getch();
    return 0;
}