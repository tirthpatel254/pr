#include<stdio.h>
int main()
{
	int a,b,c;
	
	for(a=5;a>=1;a--)
	{
		for(b=1; b<=a;b++)
		{
			printf(" ");
		}
		for(c=a;c<=5;c++)
		{
			printf("%d",c);
			
		}
		printf("\n");
	}
	
}