//例题4-10-1
/*
	输出100-200之间的所有素数
*/
#include<stdio.h>
#include<math.h>
void main()
{
	int num;
	int i;
	int tag;
	int m;
	
	for( num=100; num<=200; num++ )
	{
		tag = 1;
		m = sqrt(num);
		
		for( i=2; i<=m; i++ )
		{
			if( num%i==0 )
			{
				tag = 0;
				break;
			}
		}
		
		if( tag==1 )
		{
			printf("%d是素数\n",num);
		}
		else
		{
			printf("%d不是素数\n",num);
		}
	}
}