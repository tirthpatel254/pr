#include<stdio.h>

int main()
{
	char ch='c';
	
	do
	{
		printf("%c", ch);
		ch+=4;
	}
	while(ch<='z');
}