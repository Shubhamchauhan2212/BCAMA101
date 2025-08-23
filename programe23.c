// print addition of two array 
#include <stdio.h>

int main()
{
    int a[] ={1, 2, 3, 4, 5};
    int b[] ={10, 20, 30, 40, 50};
    int n = 5;
    printf("addition of array: ");
     for (int i = 0; i < n; i++)
     {
        int c = a[i] + b[i];
        printf("%d ",c);
     }
     
}