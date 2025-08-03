//find the greter number //

#include<stdio.h>

int main()
{
    int num1,num2;
    printf("enter first number\n");
    scanf("%d",&num1);

    printf("enter second  number\n");
    scanf("%d",&num2);

    if (num1>num2)
    {
        printf("the greter number is %d",num1); 
    }
    else if(num2>num1)
    {
        printf("the greter number is %d",num2);
    }
    else{
        printf("the number is equal");
    }
    
    
    return 0;
}