//Check whether a number is perfect or not(A number is perfect if sum of factors of number is equal to twice number)
#include<stdio.h>
 int main()
{
	int n,s=0,i=1,x;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<n)
	{
		x=n%i;
		if(x==0)
		{
			s=s+i;
		}
		i++;	
	}
	if(s==n)
	{
		printf("perfect number");
	}
	else
	{
		printf("not a perfect number");
	}
}
