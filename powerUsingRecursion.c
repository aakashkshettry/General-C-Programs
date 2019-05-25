#include<stdio.h>
int power(int, int);
int main()
{
	int b,p,v;
	printf("Enter the base and power;");
	scanf("%d%d",&b,&p);
	v=power(b,p);
	printf("%d",v);	
}
int power(int x,int y)
{
	if (y==0)
	return 1;
	else
	{
		return (x*power(x,y-1));
	}
}

