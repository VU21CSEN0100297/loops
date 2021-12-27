//Print fibonacci series upto n
#include<stdio.h>
main()
{
	int a=0,b=1,c,n,i;
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	while(c<=n)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
