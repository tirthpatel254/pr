#include<stdio.h>
int main()
{
	int raw,col,sum,size,i,j,c;
	
	printf("Enter raw size :");
	scanf("%d",&raw);
	
	printf("Enter col size :");
	scanf("%d",&col);
	
	int a[raw][col];
   
	for(int i=0;i<raw;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);	
		}
    }
    
    
   int max_number=a[0][0];

    for(int i=0;i<raw;i++)
    {
	
		for(int j=0;j<col;j++)
		{
			if(a[i][j]>max_number)
			{
			   max_number = a[i][j];	
			}	
		}
	}	
	 printf("Largest number is :%d",max_number);
}