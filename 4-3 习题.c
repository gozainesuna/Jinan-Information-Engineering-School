﻿//习题4-3
/*
	一个数列是：3/5，5/7，7/9，9/11，求这个数列前20项的和
*/
#include<stdio.h>
void main()
{
	int i;
	float a=3.0, b=5.0, s=0.0;
	
	for( i=1; i<=20; i++ )
	{
		s=s+a/b;
		a=a+2;
		b=b+2;
	}
	printf("s=%7.2f\n",s);
}