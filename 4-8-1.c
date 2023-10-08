//例题4-8-1 
//输出50-100之间所有不能被7整除的数
#include<stdio.h>
void main()
{
	int num;
	int cnt=0;
	
	for( num=50; num<100; num++ )
	{
		if( num%7!=0 )
		{
			printf("%5d",num);
			cnt++;
			
			if( cnt%10==10 );
			{
				printf("\n");
			}
		}
	}
}