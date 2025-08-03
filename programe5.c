// find the smaller number//

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("enter a first number\n");
    scanf("%d", &num1);

    printf("enter a second number\n");
    scanf("%d", &num2);

    printf("enter a third number\n");
    scanf("%d", &num3);

    if (num1<num2 && num1<num3)
    {
        printf("the smaller number is %d",num1);
    }
    else if (num2<num1 && num2<num3)
    {
        printf("the smaller number is %d",num2);
    }
        else if (num3<num1 && num3<num2)
    {
        printf("the smaller number is %d",num3);
    }
    else
    {
        printf("the number is equal");
    }
    return 0;
     
}