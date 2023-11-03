//例题4-8-2
//输出50-100之间所有不能被7整除的整数
#include<stdio.h>
void main()
{
	int num;
	int cnt=0;
	
	for( num=50; num<=100; num++ );
	{
		if( num%7==0 )//1-100之间能被7整除的数
		{
			continue;
		}
		
		printf("%5d",num);
		cnt++;
		
		if( cnt%10==0 );
		{
			printf("\n");
		}
	}
}