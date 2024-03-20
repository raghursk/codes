// #include <stdio.h>
// int main() {
//     char string[10];
//     printf("Enter the string:\n");
//     scanf("%s", string);
//     for (int i = 0; string[i] != '\0'; i++) {
//         printf("%c\n", string[i]);
//     }
//     char largest = string[0];
//     for (int i = 1; string[i] != '\0'; i++) {
//         if (string[i] > largest) {
//             largest = string[i];
//         }
//     }
//     printf("The largest element in the array is: %c\n", largest);
//     return 0;
// }
// #include <stdio.h>
// int main() 
// {
//     char string[100];
//     int ansi[256] = {0}; 
//     printf("Enter the string:\n");
//     scanf("%s", string);
//         for (int i = 0; string[i] != '\0'; i++) 
//         {
//              if (ansi[string[i]] == 0)
//              {
//             printf("%c", string[i]); 
//             ansi[string[i]] = 1;       
//              }
//       }
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int array[n];
//     printf("Enter the elements:\n");
//     for(int i = 0; i < n; i++) 
//{
//         scanf("%d", &array[i]);
//     }
//     printf("Entered elements: ");
//     for(int i = 0; i < n; i++) 
//{
//         printf("%d ", array[i]);
//     }
//     for(int i = 0; i < n; i++)
//{
//         for(int j = i + 1; j < n; j++) 
//{
//             if(array[i] > array[j])
//             {
//                 int temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
//     printf("\nSorted elements: ");
//     for(int i = 0; i < n; i++) 
//     {
//         printf("%d ", array[i]);
//     }
//     printf("\nThe 2nd largest number is: %d", array[n-2]);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     printf("Printing sum of two arrays\n"); 
//     int array1[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 11}}; 

//     int array2[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 11}};

//     int sum_array[5][5]; 

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++) 
//         {
//             sum_array[i][j] = array1[i][j] + array2[i][j]; 
//             printf("%d ", sum_array[i][j]); 
//         }
//         printf("\n"); 
//     }
//     return 0; 
// }
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number:\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&array[i]); 
    }
    for(int i=0;i<n;i++)
    {
       printf("%d",array[i]); 
    }
    printf("\n revers the array:\n");
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        // int temp=array[i];
        // array[i]=array[j];
        // array[j]=temp;
        
        
        
        array[i]=array[i]+array[j];
        array[j]=array[i]+array[j];
        array[k]=array[i]-array[j];
        // a=a+b;
        // b=a+b;
        // c=a-b;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
}



