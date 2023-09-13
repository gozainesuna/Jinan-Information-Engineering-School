//根据图书定价和购书数量确定打几折并输出总价
#include<stdio.h>
void main()
{
	float x,r;//x为图书定价，r打折数
	int n;//n为图书数量
	
	printf("输入图书定价：");
	scanf("%f",&x);
	
	printf("输入图书数量：");
	scanf("%d",&n);
	
	if(n<=10)
		r = 0.9;
	else if(n<=100)
		r = 0.85;
	else
		r = 0.8;
	
	printf("购书金额 = %.2f \n",n*x*r);
}