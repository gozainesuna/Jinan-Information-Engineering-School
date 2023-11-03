//例题4-2-2
//
#include<stdio.h>
void main()
{
	int sum;
	int num;
	int i;
	
	printf("从键盘上输入10个整数：\n");
	
	sum = 0;
	
	for( i=1;	i<=10;	 i++ )
	{
		scanf("%d",&num);
		sum = sum+num;
	}
	
	printf("这十个整数的和为：%d\n",sum);
}