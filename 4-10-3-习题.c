//习题4-10-3
//输出1000以内所有的完美数

#include<stdio.h>
void main()
{
	int num,sum,j;
	for( num=1; num<1000; num++ )
	{
		sum=0;
		for( j=1; j<num; j++ )
		{
			if( num%j==0 )
			{
				sum=sum+j;
			}
		}
		if( num==sum )
		{
			printf("%d\n",num);
		}
	}
}