//例题4-7
//求不同半径的圆柱体体积，只计算体积在100以下的圆柱体
#include<stdio.h>
#define PI 3.14
void main()
{
	int r;
	float h;
	double v;
	
	printf("请输入圆柱体的高：");
	scanf("%f",&h);
	
	for ( r=1; r<=10; r++ )
	{
		v = PI*r*r*h;
		
		if( v>=100 )
		{
			break;
		}
		
		printf("半径等于%d,体积等于%.2f\n",r,v);
	}
	
	printf("此时r=%d\n",r);
}