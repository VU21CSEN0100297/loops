//Read n numbers and print even numbers in it
#include<stdio.h>
main()
{
	int a=0,b=1,c;
	printf("enter the number:");
	scanf("%d",&c);
	if(c%2!=0)
	c=c-b;
	else
	c=c;
	while(a<c)
	{
		a=a+2;
		printf("%d\n",a);
	}
}
