//通过求根公式求解一元二次方程
//总第4课
//2023/6/6创建

#include<stdio.h>
#include<math.h>
void main()

{
	float a,b,c,d ; 
	double x1,x2 ;
	a = 15 ;
	b = 17 ;
	c = 11 ;
	d = b*b-4*a*c ;
	x1 = (-b+sqrt(d))/(2*a) ;
	x2 = (-b-sqrt(d))/(2*a) ;
	printf("x1 = %f , x2 = %f",x1,x2);
}