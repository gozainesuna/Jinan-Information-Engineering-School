//本程序用于，三角形中，输入三边长度，输出三角形周长
#include<stdio.h>
void main()
{
	float a,b,c;
	
	scanf("%f %f %f",&a,&b,&c);	
	
	if(a+b>c && a+c>b && b+c>a)
		printf("三角形的周长为：%7.2f\n",a+b+c);
	else
		printf("error!\n");
}