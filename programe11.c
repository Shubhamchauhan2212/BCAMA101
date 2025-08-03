// even number seris multiply byy 5


#include <stdio.h>

int main()
{
    int limit, i = 0;
    printf("enter a number you want to serirs of even number\n");
    scanf("%d", &limit);
    while (i <= limit)
    {
        printf("%d ", i);
        i += 5;
    }

    return 0;
}