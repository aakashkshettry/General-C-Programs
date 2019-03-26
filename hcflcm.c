#include<stdio.h>
int main()
{
	int a,b,temp,r,hcf,lcm,firstNumber,secondNumber;
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	firstNumber=a;
	secondNumber=b;
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
	hcf=a;
	lcm=(firstNumber*secondNumber)/hcf;
	printf("HCF=%d",hcf);
	printf("LCM=%d",lcm);
	return 0;
}
