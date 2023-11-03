//例题4-11-1
//输入两个整数，求他们的最大公约数
#include<stdio.h>
void main()
{
	int a,b;//输入的两个变量
	int r;//余数
	int tmp;//中间变量
	
	printf("输入两个整数：");
	scanf("%d %d",&a,&b);
	
	if(a<b)//判断输入的数中较大的
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
}