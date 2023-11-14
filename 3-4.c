//例题3-4
/*
	输入三个整数并按照从小到大的顺序排列
*/
#include<stdio.h>
void main()
{
	int a,b,c,tmp;
	
	printf("输入a,b,c三个整数：");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	
	if(a>c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	
	if(b>c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	
	printf("%d %d %d\n",a,b,c);
}