#include<stdio.h>
int main()
{
	int a,b,c;
	
	for(a=5;a>=1;a--)
	{
		for(b=a; b<5;b++)
		{
			printf(" ");
		}
		for(c=a;c>=1;c--)
		{
			if(c%2==1)
			{
				printf("1");
			}else
			{
				printf("0");
			}
			
		}
		printf("\n");
	}
	
}
  
/*
54321





*/        