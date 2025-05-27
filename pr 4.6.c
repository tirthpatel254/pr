#include<stdio.h>
int main()
{
	int a,b,c=5,d;
	
	for(a=c;a>=1;a--)
	{
		for(d=a-1;d>=1;d--)
		{
			printf("  ");
		}
		for(b=a;b<=5;b++)
		{
			printf(" %d",b);
		}
		for(b=c-1;b>=a;b--)
		{
			printf(" %d",b);
		}
		printf("\n");
	}
}