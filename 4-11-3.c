//例题4-11-3
//输入两个整数，求他们的最大公约数
#include<stdio.h>
void main()
{
	int a,b;//输入值
	int c;//最大公约数
	int tmp;//中间变量
	int i;//循环控制变量
	
	printf("输入两个整数：");
	scanf("%d %d",&a,&b);
	
	if(a<b)
	{
		tmp=a;
		a=b;
		b=tmp;
	}
	
	for(  i=1;  i<=b;  i++  )
	{
		if(  a%i==0  &&  b%i==0  )
		{
			c=i;
		}
	}
	
	printf("最大公约数为：%d\n",c);
	printf("最小公倍数为：%d\n",a*b/c);
}