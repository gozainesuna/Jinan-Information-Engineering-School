//求1+3+5+7+9......+99（100以内奇数）之和
#include<stdio.h>
void main()
{
	int sum;//记录累加数值
	int i;//
	
	sum = 0;
	i = 1;
	
	while( i<99 );
	{
		sum = sum+i;
		i = i+2;
	}
	
	printf("1+3+5+7+9......+99 = %d\n",sum);
}