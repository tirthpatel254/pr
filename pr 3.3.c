#include<stdio.h>
int main()
{
	int num,sum,first,last;
	
	printf("enter any number :");
	scanf("%d",&num);
	
	last=num%10;
	
	first=num;
    while(first>=10)
    {
    	first/=10;
    	
	}
    	sum=first+last;
	
	printf("sum of first and last digit is:%d",sum);

}