//Read a number and count the digits in given number.
#include<stdio.h>
main()
{
	int n,i=0;
	scanf("%d",&n);
	while(n>0)
	{
		i++;
		n=n/10;
	}
	printf("%d",i);
}
