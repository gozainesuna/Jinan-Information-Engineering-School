//输入一个浮点数并输出它的绝对值
#include<stdio.h>
void main()
{
	float x;
	printf("输入一个浮点数：");
	scanf("%f",&x);
	
	if(x<0)
		x = -x;
	
	printf("绝对值 = %f",x);
}