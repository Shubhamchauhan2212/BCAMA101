// swap two number without using third variable
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swaping\n");
    printf("the first number is %d\n",a);
    printf("the second number is %d\n",b);
    return 0;

}