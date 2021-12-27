#include <stdio.h>
int main()
{
    int num,i,factorial;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    factorial=1;
    for(i=num; i>=1; i--)
    {
    	factorial=factorial*i;
    }    
    printf("\nFactorial of %d is = %ld",num,factorial);
}
