#include <stdio.h>
int add(int a, int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}
int multiply(int a, int b){
    return a * b;
}
float divide(int a, int b){
    return (float)a / b;
}
int main()
{
   int num1, num2;
   printf("Enter the first number: ");
   scanf("%d",&num1);

   printf("Enter the second number: ");
   scanf("%d",&num2);

    printf("\nResults\n");
    printf("Addition: %d\n", add(num1, num2));
    printf("subtract: %d\n", subtract(num1, num2));
    printf("multiply: %d\n", multiply(num1, num2));
    printf("divide: %f\n", divide(num1, num2));

    return 0;
}