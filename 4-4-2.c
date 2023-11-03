//例题4-4-2
//从键盘上输入10个数并求和(使用do...while实现)
#include<stdio.h>
void main()
{
	int sum;//累加器
	int num;
	int i;//计数器
	
	printf("从键盘上输入10个整数：\n");
	sum=0;
	
	for(  i=1;  i<=10;  i++  )
	{
		scanf("%d",&num);
		sum = sum+num;
	}
	
	printf("这10个整数的和为：%d\n",sum);
}