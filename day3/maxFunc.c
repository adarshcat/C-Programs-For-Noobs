#include <stdio.h>
#include <conio.h>

int calcMax(int, int);

int main(){
    int a, b, max;

    printf("Enter the two numbers: \n");
    scanf("%d%d", &a, &b);

    max = calcMax(a, b);

    printf("The maximum is %d", max);

    getch();
    return 0;
}

int calcMax(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}
