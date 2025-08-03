// odd number serirs 

#include <stdio.h>

int main()
{
    int limit, i = 1;
    printf("enter a number you want to serirs of odd number\n");
    scanf("%d", &limit);
    while (i <= limit)
    {
        printf("%d ", i);
        i += 2;
    }

    return 0;
}