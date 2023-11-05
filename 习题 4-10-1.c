//习题4-10-1
//输出100-200范围内所有回文数的和

#include<stdio.h>
void main()
{
	int num,sum=0;
	for( num=100; num<=200; num++ )
	{
		if( num/100==num%10 )
		{
			sum+=num;
			printf("%5d",num);
		}
	}
	printf("\nsum=%d\n",sum);
}