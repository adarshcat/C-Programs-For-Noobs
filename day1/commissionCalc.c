#include <stdio.h>
#include <conio.h>

int main() {
    float sales, comm = 0.0;

    printf("Enter the values of sales: ");
    scanf("%f", &sales);

    if (sales >= 1000 && sales < 50000) {
        comm = 1000 + 0.1 * (sales-1000);
    }
    else if (sales >= 50000 && sales < 100000) {
        comm = 2000 + 0.2 * (sales-50000);
    }
    else if (sales >= 100000) {
        comm = 0.3 * sales;
    }

    printf("Commission: %f", comm);

    getch();
    return 0;
}