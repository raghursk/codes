#include <stdio.h>

int main() {
  int n;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int array[n];
  int *ptr = array;      // Single pointer to the array
  int **ptr_array = &ptr; // Double pointer to point to the single pointer

  printf("Enter %d numbers:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", **ptr_array + i); // Access elements using pointer arithmetic
  }

  printf("The squares are: ");
  for (int i = 0; i < n; i++)
  {
    printf(" %d",**(ptr_array+i));
  }
  printf("\n");

  return 0;
}
