#include<stdio.h>
int main()
{
	int raw,col,sum,size,i,j,c;
	
	printf("Enter raw & col size :");
	scanf("%d",&raw);

	int a[raw][raw];
   
	for(int i=0;i<raw;i++)
	{
		for(int j=0;j<raw;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);	
		}
    }
    
   int transpose[raw][raw];
   
   for(int i=0;i<raw;i++)
	{
		for(int j=0;j<raw;j++)
		{
			transpose[i][j]=a[j][i];
			
		}
    }
    printf("transpose is :\n");
   	for(int i=0;i<raw;i++)
	{
		for(int j=0;j<raw;j++)
		{
			printf(" %d ",	transpose[i][j]);
		
		}
		printf("\n");
    }
    
}