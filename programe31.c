#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[200];
    printf("Enter the first string: ");
    gets(str1);

    strcpy(str2,str1);

    printf("orignal string: %s\n",str1);
    printf("copying string is : %s\n",str2);
    return 0;
}