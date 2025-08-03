// check the number is odd or eeven //

#include<stdio.h>

int main()
{
    int n;
    printf("enter number to check ");
    scanf("%d",&n);

    if (n%2 == 0)
    {
        printf("%d the number is odd",n);
    }
    else{
        printf("%d the number is even",n);
    }
        
    return 0;
} 
