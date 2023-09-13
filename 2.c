//在已知半径和高的情况下，求得表面积和体积
//总第2课
//2023/5/30

#include<stdio.h>
#define PI 3.1415926
void main()
{
	float r,h,s,v;
	
	printf("请输入半径和高");
	scanf("%f %f",&r,&h);
	
	s = 2*PI*r*r+2*PI*r*h;
	v = PI*r*r*h;
	
	printf("表面积 = %f , 体积 = %f",s,v);
}