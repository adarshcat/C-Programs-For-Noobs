#include <stdio.h>
#include <conio.h>

float calcArea(float);

int main(){
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = calcArea(radius);

    printf("The area of the circle is %f", area);

    getch();
    return 0;
}

float calcArea(float radius){
    return 3.14 * radius * radius;
}