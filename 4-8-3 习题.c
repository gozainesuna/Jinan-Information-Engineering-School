//习题4-8-3
/*
	一篮子鸡蛋
*/
#include<stdio.h>
void main()
{
	int egg=9;
	while( egg%3!=2 || egg%5!=4 )
	{
		egg+=2;
	}
	printf("最少应赔偿%d元",egg);
}