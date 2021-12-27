//write a c program to calculate power of a number  (xy  ).
#include <stdio.h>
main() 
{
    int x,y,result=1,i= 1;
    scanf("%d%d", &x, &y);
    while(i<=y)
    {
        result=result*x;
        i++;
    }
    printf("%d",result);
}
