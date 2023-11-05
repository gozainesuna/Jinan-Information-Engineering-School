//习题 4-10-2
//输出所有水仙花数

#include<stdio.h>
void main()
{
	int a,b,c,i;
	for( i=100; i<=999; i++ )
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if( i==a*a*a+b*b*b+c*c*c )
		{
			printf("%d\n",i);
		}
	}
}