//例题4-1-4
//100以内所有偶数之和
#include<stdio.h>
void main()
{
	int sum;
	int i;
	
	sum = 0;
	i = 0;
	
	while( i<=100)
	{
		sum = sum+i;
		i = i+2;
	}
	
	printf("2+4+6+8+10......+100 = %d\n",sum);
}