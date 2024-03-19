
#include<stdio.h>
//sorting the array -------------
// int main()
// {
//     int n;
//     printf("enter the number:\n");
//     scanf("%d",&n);
//     printf("array element are:\n");
//     int array[n];
//     for(int i=0;i<n;i++)
//     {
//     scanf(" %d",&array[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//     printf(" %d",array[i]);
//     }
//     printf("befor sorting the array:\n");
//     for(int i=0;i<n;i+    printf("befor sorting the array:\n");
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;    printf("befor sorting the array:\n");
//     for(int i=0;i<n;i+j<n;j++)
//         {
//           if(array[i] > array[j])
//           {
//               int temp=array[i];
//               array[i]=array[j];
//               array[j]=temp;
//           }
//         }
//     }
//     printf("\n after the sorting the array:");
//     for(int i=0;i<n;i++)
//     {
//     printf(" %d",array[i]);
//     }
// }
int main()
{
    //copy the array one array to anthor array :
    int i,j,n;
    printf("enter the number size of :\n ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
    int sarr[n];
    for(j=0;j<n;j++)
    {
        printf("%d",sarr[j]);
    }
    array[i]=sarr[j];
    
    for(j=0;i<n;j++)
    {
        printf(" %d",sarr[j]);
    }
}





