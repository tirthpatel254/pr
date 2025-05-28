#include<stdio.h>
int main()
{
	int size=0,c,i;
	
	
	printf("Enter the size of arry:");
	scanf("%d",&size);
	int a[size];
	
	printf("Enter elements :\n");
	for( i = 0;i<size;i++)
	{
		printf("a[%d]=",i);
	    scanf("%d",&a[i]);
    }
    for( i = 0;i<size;i++)
    {
		
		c=a[i];

	
       	if(c<0)
    	{
		    printf("Negative elements of an arry :%d\n",c);
	    }
    
    
    }
	
}