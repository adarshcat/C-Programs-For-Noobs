#include <stdio.h>
#include <conio.h>

int calcArea(int, int);
int calcPeri(int, int);

int main(){
    int l, b, area, perimeter;

    printf("Enter the length and breadth of the rectangle: \n");
    scanf("%d%d", &l, &b);

    area = calcArea(l, b);
    perimeter = calcPeri(l, b);

    printf("The area of the rectangle is %d", area);
    printf("\nThe perimeter of the rectangle is %d", perimeter);

    getch();
    return 0;
}

int calcArea(int l, int b){
    return l*b;
}

int calcPeri(int l, int b){
    return 2*(l+b);
}