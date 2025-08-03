#include <stdio.h>

int main()
{
    int num1, num2, smaller;
    printf("enter first number = ");
    scanf("%d", &num1);

    printf("enter second number = ");
    scanf("%d", &num2);

    smaller = (num1<num2) ? num1 : num2;

    printf("smaller number is: %d\n",smaller);
    return 0;
}