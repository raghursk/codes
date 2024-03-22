// #include <stdio.h>

// int main() {
//     int i, j;
//     int row = 2;
//     int col = 2;

//     int array[2][2] = {{2, 3}, {4, 5}};
//     int array2[2][2] = {{6, 7}, {8, 9}};
//     int array3[2][2]; // Declare array3 for storing multiplication result

//     // Print array
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             printf(" %d", array[i][j]);
//         }
//         printf("\n");
//     }

//     // Print array2
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             printf(" %d", array2[i][j]);
//         }
//         printf("\n");
//     }

//     // Multiply arrays and store in array3
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             array3[i][j] = array[i][j] * array2[i][j];
//         }
//     }

//     printf("The multiplication of two arrays is:\n");
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             printf(" %d", array3[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int row = 2, col = 2;
//     int **array = (int **)malloc(row * sizeof(int *));
//     int **array2 = (int **)malloc(row * sizeof(int *));
//     int **array3 = (int **)malloc(row * sizeof(int *)); // Allocate memory for array3

//     // Allocate memory for columns in each row
//     for (int i = 0; i < row; i++) {
//         array[i] = (int *)malloc(col * sizeof(int));
//         array2[i] = (int *)malloc(col * sizeof(int));
//         array3[i] = (int *)malloc(col * sizeof(int)); // Allocate memory for array3 columns
//     }

//     // Initialize the 2D arrays with values
//     int array_values[2][2] = {{2, 3}, {4, 5}};
//     int array2_values[2][2] = {{6, 7}, {8, 9}};

//     // Copy the values from static arrays to dynamic arrays
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             array[i][j] = array_values[i][j];
//             array2[i][j] = array2_values[i][j];
//         }
//     }

//     // Multiply arrays and store in array3
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             array3[i][j] = array[i][j] * array2[i][j];
//         }
//     }

//     // Print the arrays
//     printf("Array 1:\n");
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             printf("%d ", array[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Array 2:\n");
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             printf("%d ", array2[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Array 3 (Multiplication of Array 1 and Array 2):\n");
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             printf("%d ", array3[i][j]);
//         }
//         printf("\n");
//     }

//     // Free the memory when done
//     for (int i = 0; i < row; i++) {
//     
//         free(array[i]);
//         free(array2[i]);
//         free(array3[i]);
//     }
//     free(array);
//     free(array2);
//     free(array3);

//     return 0;
// }

// #include <stdio.h>

// int fun(int array[2][2], int array2[2][2], int array3[2][2], int row, int col)
// {
//     int i, j;

//     // Multiply arrays element-wise
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) 
//         {
//             array3[i][j] = array[i][j] * array2[i][j];
//         }
//     }

//     // Print arrays
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             printf("%d ", array[i][j]);
//         }
//         printf("\n");
//     }

//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             printf("%d ", array2[i][j]);
//         }
//         printf("\n");
//     }

//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             printf("%d ", array3[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int row = 2, col = 2;
//     int array[2][2] = {{2, 3}, {4, 5}};
//     int array2[2][2] = {{6, 7}, {8, 9}};
//     int array3[2][2];

//     fun(array, array2, array3, row, col);

//     return 0;
//}
// #include <stdio.h>

// void mularray(int array[2][2], int array2[2][2], int array3[2][2], int row, int col)
// {
//     int i, j;

//     // Multiply arrays element-wise
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             array3[i][j] = array[i][j] * array2[i][j];
//         }
//     }

//     // Print arrays
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             printf("%d ", array[i][j]);
//         }
//         printf("\n");
//     }

//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             printf("%d ", array2[i][j]);
//         }
//         printf("\n");
//     }

//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             printf("%d ", array3[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int row = 2, col = 2;
//     int array[2][2] = {{2, 3}, {4, 5}};
//     int array2[2][2] = {{6, 7}, {8, 9}};
//     int array3[2][2];

//     // Function pointer declaration
//     void (*fun_ptr)(int[2][2], int[2][2], int[2][2], int, int);
//     fun_ptr = mularray;
//     fun_ptr(array, array2, array3, row, col);

//     return 0;
// }




















