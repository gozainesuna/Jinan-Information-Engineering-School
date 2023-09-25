#include<stdio.h>
void main()
{
	int sum;
	int num;
	int i;
	
	printf("从键盘上输入10个整数：\n")；
	sum = 0;
	i = 1;
	
	while( i<=10 );
	{
		scanf("%d",&num);
		sum = sum+sum;
		i++;
	}
	
	printf("这10个整数的和为：%d\n",sum);
}