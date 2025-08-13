// reverse the given number 
#include<stdio.h>

int main()
{
    int num,reversed = 0, reminder;
    printf("enter the number to reverse this number\n");
    scanf("%d",&num);

    while (num != 0)
    {
    reminder = num %10;
    reversed = reversed * 10 + reminder;
    num /= 10;

    }
    printf("reversed number is: %d\n",reversed);
    
    return 0;
}