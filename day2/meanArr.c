#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100];
    int n, i;
    float sum = 0.0, mean;

    // take the array length as an input
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    // take the array as an input
    for (i=0; i<n; i++) {
        printf("Enter the element %d of the array: ", i+1);
        scanf("%d", &arr[i]);
    }

    // find the mean of the elements
    for (i=0; i<n; i++) {
        sum += arr[i];
    }

    mean = sum/n;
    printf("\nThe mean of the elements are: %f", mean);

    // print the elements less than mean
    printf("\nThe elements less than mean are: \n");
    for (i=0; i<n; i++) {
        if (arr[i] < mean)
            printf("%d ", arr[i]);
    }

    // print the elements greater than mean
    printf("\nThe elements greater than mean are: \n");
    for (i=0; i<n; i++) {
        if (arr[i] > mean)
            printf("%d ", arr[i]);
    }

    getch();
    return 0;
}