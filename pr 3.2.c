#include<stdio.h>
int main()
{
    int sum=0,count,num;

	printf("enter any number :");
	scanf("%d",&num);
	
	while(num>0)
	{
    num=num/10;
    count++;
}
	printf("%l",count);
}

// input=>123
//  output=>3