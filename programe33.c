//Swap two numbers using function

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter a second number: ");
    scanf("%d", &num2);

    printf("\n Before swapping num = 1 %d,num = 2 %d\n", num1, num2);
    
     swap(&num1, &num2);
    printf("\n After swapping num = 1 %d,num = 2 %d\n", num1, num2);
    return 0;
}