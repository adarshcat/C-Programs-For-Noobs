#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100];
    int n, i;
    float sum = 0.0, average;

    // take the array length as an input
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    // take the array as an input
    for (i=0; i<n; i++) {
        printf("Enter the element %d of the array: ", i+1);
        scanf("%d", &arr[i]);
    }

    // calculate the sum and the average of the elements of the array
    for (i=0; i<n; i++) {
        sum += arr[i];
    }

    average = sum/n;

    // print the output
    printf("\nThe sum of the elements are: %f\n", sum);
    printf("The average of the elements are: %f\n", average);

    getch();
    return 0;
}