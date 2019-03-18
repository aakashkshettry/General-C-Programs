#include<stdio.h>
 
void TOH(int,char,char,char);
 
void main()
{
	int n;
	printf("How many plates?");
	scanf("%d",&n);
	TOH(n,'S','A','D');
}
 
void TOH(int n,char beg,char aux,char des)
{
	int count=0;
	if(n==1)
	{
		printf("Move disk from %c to %c",beg,des);
		printf("\n");
		return;
	}
	else
	{
		TOH(n-1,beg,des,aux);
		printf("Move disk from %c to %c",beg,des);
		printf("\n");
		TOH(n-1,aux,beg,des);
	}
}
