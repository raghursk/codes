#include "main.h"
#include <string.h>

void fun(int n, int array[]) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d", array[i]);
    }
}

void reverse_string(const char *string) {
    char reversed[100]; 
    int length = strlen(string);
    int i, j = 0, k;

    for (i = 0; i < length; i++)
    {
        if (string[i] != ' ') 
        {
            reversed[j++] = string[i];
        } else {
            for (k = j - 1; k >= 0; k--) {
                printf("%c", reversed[k]); 
            }
            printf(" "); 
            j = 0; 
        }
    }
    for (k = j - 1; k >= 0; k--) {
        printf("%c", reversed[k]);
    }
}

void find_middle(int n, int array[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
    }
    if (n % 2 != 0) {
        int mid = n / 2;
        printf("Middle element of the array is: %d\n", array[mid]);
    }
}

void custom_memcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
    printf("%s\n", dest); 
}

void concatenate_strings() {
    int i = 0, j = 0;
    char firstname[100];
    printf("Enter the firstname:\n");
    scanf("%s", firstname);
    char lastname[10];
    printf("Enter the lastname:\n");
    scanf("%s", lastname);
    while (firstname[i] != '\0')
    {
        i++;
    }
    
    while (lastname[j] != '\0')
    {
        firstname[i] = lastname[j];
        i++;
        j++;
    }
    firstname[i] = '\0';
    printf("Concat string: %s\n", firstname);
}
