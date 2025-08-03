// number is divisable 

#include <stdio.h>

int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d", &num);
   
    if (num % 5 == 0)
    {
        printf("%d is divisable by 5",num);
    }
    else{
        printf("%d the number is not divisable by 5",num);
    }
     return 0;
}
