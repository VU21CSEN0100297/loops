#include<stdio.h>
main()
{
	int n,s=0,x;
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		s=s+x;
		n=n/10;
	}
	printf("%d\n",s);
}
