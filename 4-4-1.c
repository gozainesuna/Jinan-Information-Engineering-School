//例题4-4-1
//1+2+3+4+5......+100之和
#include<stdio.h>
void main()
{
	int sum;
	int i;
	
	for( i=1;	i<=100;		i++ )
	{
		sum = sum+i;
	}
	
	printf("1+2+3+4+5+......+100 = %d \n",sum);
}