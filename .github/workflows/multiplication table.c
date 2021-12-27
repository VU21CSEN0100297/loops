#include<stdio.h>
int main()
{
	int i=1,n=10,p;
	printf("any integer value");
	scanf("%d",&n);
	while(i<11)
	{
		p=i*n;
		printf("%d*%d=%d\n",n,i,p);
		i++;
	}
}
