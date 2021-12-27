#include<stdio.h>
int main()
{
	int n,x,s=0,y;
	scanf("%d",&n);
	y=n;
	while(n>0)
	{
		x=n%10;
		s=(s*10)+x;
		n=n/10;
    }
    if(y==s)
    {
    	printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}
