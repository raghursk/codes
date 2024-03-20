#include <stdio.h>
#include <stdlib.h>

void sortArray() {
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("Array elements are:\n");
    int *array = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf(" %d", &array[i]);
    }
    for (int i = 0; i < n; i++) {
        printf(" %d", array[i]);
    }
    printf("\nBefore sorting the array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\nAfter sorting the array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");
    free(array);
}

void copyArrayWithoutPointers() {
    int i, j, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *array = malloc(n * sizeof(int));
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Elements in the original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int *sarr = malloc(n * sizeof(int));
    for (j = 0; j < n; j++) {
        sarr[j] = array[j];
    }
    printf("Elements in the new array: ");
    for (j = 0; j < n; j++) {
        printf("%d ", sarr[j]);
    }
    printf("\n");
    free(array);
    free(sarr);
}

void copyArrayUsingPointers() {
    int i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *array = malloc(n * sizeof(int));
    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Elements in the original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int *sarr = malloc(n * sizeof(int));
    int *ptr1 = array;
    int *ptr2 = sarr;
    for (i = 0; i < n; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }
    printf("Elements in the new array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr2 + i));
    }
    printf("\n");
    free(array);
    free(sarr);
}

void sortArrayUsingFunctionPointer() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *array = malloc(n * sizeof(int));
    void (*functnPointer)(int, int*);
    functnPointer = &sortArray;
    functnPointer(n, array);
    free(array);
}

void sort2DArrayUsingFunctionPointer() {
    int m, n;
    printf("Enter the number of rows and columns for the array: ");
    scanf("%d %d", &m, &n);
    int **array = malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        array[i] = malloc(n * sizeof(int));
    }
    void (*functnPointer)(int, int, int**);
    functnPointer = &sortArray;
    functnPointer(m, n, array);
    for (int i = 0; i < m; i++) {
        free(array[i]);
    }
    free(array);
}

int main() {
    int choice;
    printf("\n1. Sort Array\n2. Copy Array Without Pointers\n3. Copy Array Using Pointers\n4. Sort Array Using Function Pointer\n5. Sort 2D Array Using Function Pointer\n6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            sortArray();
            break;
        case 2:
            copyArrayWithoutPointers();
            break;
        case 3:
            copyArrayUsingPointers();
            break;
        case 4:
            sortArrayUsingFunctionPointer();
            break;
        case 5:
            sort2DArrayUsingFunctionPointer();
            break;
        case 6:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 6.\n");
    }

    return 0;
}

