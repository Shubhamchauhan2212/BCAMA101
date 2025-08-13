#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the number of elements\n");
    scanf("%d",&a);
    int arr[a];
    printf("Enter %d of elements\n",a);

    for (int  i = 0; i < a; i++)
    {
        scanf("%d",&arr[a]);
    }
    printf("The elements are: \n");
    for (int i = 0; i < a; i++)
    {
        printf("%d",arr[a]);
    }
    
    
    return 0;
}