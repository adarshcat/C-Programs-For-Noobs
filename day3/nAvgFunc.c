#include <stdio.h>
#include <conio.h>

float calc_avg(int);

int main(){
    int n;
    float avg;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    avg = calc_avg(n);

    printf("The average is: %f", avg);

    getch();
    return 0;
}

float calc_avg(int n){
    float sum = 0.0;

    for (int i=1; i<=n; i++){
        sum += i;
    }

    return sum/n;
}