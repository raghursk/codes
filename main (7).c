#include<stdio.h>
int main()
{
    int n;
    printf("enter the numbers:\n");
    scanf("%d",&n);
    int array[n];
    int *ptr=array;
    int **ptr_array=&ptr;
    for(int i=0;i<n;i++)
    {
        scanf("%d",**(ptr+i));
    }
    for(int i=0;i<n;i++)
    {
        printf(" %d",**(ptr+i));
    }
}