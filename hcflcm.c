#include<stdio.h>
int main()
{
	int a,b,temp,r;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		temp=a;
		a=b;
		b=temp;	
	}
	while(b%a!=0)
	{
		r=b%a;
		a=r;
		b=a;
	}
	printf("HCF=%d",a);
	return 0;
}
