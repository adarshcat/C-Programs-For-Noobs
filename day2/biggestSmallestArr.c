#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100];
    int n, i;
    int biggest, smallest;

    // take the array length as an input
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    // take the array as an input
    for (i=0; i<n; i++) {
        printf("Enter the element %d of the array: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    biggest = arr[0];
    smallest = arr[0];

    // find the biggest and smallest element in the array
    for (i=0; i<n; i++) {
        biggest = (arr[i] > biggest)?arr[i]:biggest;
        smallest = (arr[i] < smallest)?arr[i]:smallest;
    }

    // print the result
    printf("\n\nThe smallest value in the array is, %d", smallest);
    printf("\nThe biggest value in the array is, %d", biggest);

    getch();
    return 0;
}