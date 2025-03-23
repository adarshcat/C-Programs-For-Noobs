#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100];
    int n, i;

    // take the array length as an input
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    // take the array as an input
    for (i=0; i<n; i++) {
        printf("Enter the element %d of the array: ", i+1);
        scanf("%d", &arr[i]);
    }

    // print the array in reverse
    printf("\nThe elements of the array in reverse order: \n");
    for (i=n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }


    getch();
    return 0;
}