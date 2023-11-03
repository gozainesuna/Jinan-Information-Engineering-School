//例题4-11-4
//输入两个整数，求他们的最大公约数和最小公倍数
#include<stdio.h>
void main()
{
	int a,b;
	int k;
	
	printf("输入两个整数：");
	scanf("%d %d",&a,&b);
	k=a;
	while( k%a!=0 || k%b!=0 )
	{
		k++;
	}
	printf("最小公倍数为：%d\n",k);
	printf("最大公约数为：%d\n",a*b/k);
}