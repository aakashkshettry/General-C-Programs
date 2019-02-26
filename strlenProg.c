#include<stdio.h>
int main()
{
	char word[50];
	int len,i;
	len=0;
	printf("Enter the word");
	scanf("%[^\n]s",word);				//taking the input as a string in word
	for (i=0;word[i]!='\0';i++)
	{
		len++;
	}
	printf("length of the string=%d",len);
	return 0;
}
