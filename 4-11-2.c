//例题4-11-2
//输入两个整数，求他们的最大公约数和最小公倍数
#include<stdio.h>
void main()
{
	int a,b;
	int r;//余数
	int tmp;//中间变量
	int m;//a b之乘积
	
	printf("输入两个整数：");
	scanf("%d %d",&a,&b);
	m = a*b;
	
	if(a<b)
	{
		tmp=a;
		a=b;
		b=tmp;
	}
	
	do
	{
		r=a%b;
		a=b;
		b=r;
	}while(r);
	
	printf("最大公约数为：%d\n",a);
	printf("最小公倍数为：%d\n",m/a);
}