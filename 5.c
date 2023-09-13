//通过海伦公式，在已知三角形两边及其夹角的情况下，求得三角形第三边及三角形面积
//总第5课
//2023/6/8创建


#include<stdio.h>
#include<math.h>
#define PI 3.1415926

void main ()

{
	float a ,b ,c ,s ,alfa ,af ; 
	
	printf("Please enter a,b,alfa: ");//转义字符 \n.为换行符		
	scanf("%f %f %f",&a ,&b ,&alfa);/*alfa表示角度*/
	
	af = alfa*PI/180 ;
	c = sqrt(a*a+b*b-2*a*b*cos(af));/* af表示弧度*/
	s = a*b*sin(af)/2 ;
	
	printf("第三边C = %.3f，面积S = %.3f",c,s);
}
