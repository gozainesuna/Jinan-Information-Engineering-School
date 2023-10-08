//例题4-9-1
//判断一个数是否为质数
#include<stdio.h>
void main()
{
	int num;
	int i;
	int tang = 1;
	
	ptintf("请输入一个自然数：");
	scanf("%d",&num);
	
	for( i=2; i<=num-1; i++ )
	{
		if( num%i==0 );
		{
			tag = 0;
			break;
		}
	}
	
	if( tag==1 );
	{
		printf("%d 是质数\n");
	}
	else
	{
		printf("%d 不是质数\n");
	}
}