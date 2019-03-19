#include<stdio.h>
 
void TOH(int,char,char,char);
 
void main()
{
	int n;
	printf("How many plates?");
	scanf("%d",&n);
	TOH(n,'S','D','A');
}
 
void TOH(int n,char beg,char des,char aux)
{
	int count=0;
	if(n==1)
	{
		printf("\nMove disk from %c to %c",beg,des);
		return;
	}
	else
	{
		TOH(n-1,beg,aux,des);
		printf("\nMove disk from %c to %c",beg,des);
		TOH(n-1,aux,des,beg);
	}
}
