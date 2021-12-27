//Write a c program to find sum of squares of digits of a given number
#include<stdio.h>
int main()
{
	int n,a,i=1,s=0;
	scanf("%d",&n);
	while(n>0)
	{
	      i=n%10;
		a=i*i;
		s=s+a;
	      n=n/10;	
	}
	printf("%d",s);
	return 0;
}
