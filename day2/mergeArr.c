#include <stdio.h>
#include <conio.h>

int main() {
    int arr1[100];
    int arr2[100];
    int mergedArr[200];
    int n1, n2, i;

    // take the first array length as an input
    printf("Enter the length of the first array: ");
    scanf("%d", &n1);

    // take the first array as an input
    for (i=0; i<n1; i++) {
        printf("Enter the element %d of the first array: ", i+1);
        scanf("%d", &arr1[i]);
    }

    
    // take the second array length as an input
    printf("Enter the length of the second array: ");
    scanf("%d", &n2);

    // take the second array as an input
    for (i=0; i<n2; i++) {
        printf("Enter the element %d of the second array: ", i+1);
        scanf("%d", &arr2[i]);
    }


    // merge the two arrays
    for (i=0; i<n1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (i=0; i<n2; i++) {
        mergedArr[i+n1] = arr2[i];
    }

    // print the merged array
    printf("\nPrinting the merged array: \n");
    for (i=0; i<n1+n2; i++) {
        printf("%d ", mergedArr[i]);
    }

    getch();
    return 0;
}
