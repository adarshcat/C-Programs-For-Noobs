#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100];
    int copyArr[100];
    int n, i;

    // take the array length as an input
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    // take the array as an input
    for (i=0; i<n; i++) {
        printf("Enter the element %d of the array: ", i+1);
        scanf("%d", &arr[i]);
    }

    // copy the array
    for (i=0; i<n; i++) {
        copyArr[i] = arr[i];
    }

    // print the copied array
    printf("\nThe copied array: \n");
    for (i=0; i<n; i++) {
        printf("%d ", copyArr[i]);
    }

    getch();
    return 0;
}