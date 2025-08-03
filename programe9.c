// even number seris


#include <stdio.h>

int main()
{
    int limit, i = 0;
    printf("enter a number you want to serirs of even number\n");
    scanf("%d", &limit);
    while (i <= limit)
    {
        printf("%d ", i);
        i += 2;
    }

    return 0;
}