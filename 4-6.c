#include<stdio.h>
void main()
{
	int i;
	int j;
	
	for( i=1;	i<=9;	i++; )
	{
		printf("%5d",i);
	}
	
	printf("\n------------------------------------\n");
	
	for( i=1;	i<=9;	i++; )
	{
		for( j=1;	j<=1;	j++ )
		{
			printf("%2d*%d = %-3d",i,j,i*j);
		}
		
		printf("\n");
	}
}