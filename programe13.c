#include<stdio.h>

int main()
{
    int i =1;
    start:
    if(i > 10)
    return 0;
    if(i==3 || i==6 || i== 9){
        i++;
        goto start;  
    }
    printf("%d ",i);
    i++;
    goto start;
    return 0;
}
