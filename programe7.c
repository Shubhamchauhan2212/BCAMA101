// number is prime or not 

#include<stdio.h>

int main()
{
    int num, count =0;
    printf("enter the number to check a prime or not\n");
    scanf("%d",&num);
    
    for (int i = 1; i <= num; i++){
    if (num % i==0)
    {
        count++;        
    }
}
   if (count==2)
   {
    printf("%d is a prime number\n",num);
   }
   else{
     printf("%d is not prime number\n",num);
   }
    

    return 0;
}