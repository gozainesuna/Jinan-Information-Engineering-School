//例题 3-1

/*
	输入一个整数并判断它是奇数还是偶数
*/

#include<stdio.h>
void main()
{
	int i ; 
	
	printf("输入一个整数：");
	scanf("%d",&i);
	
	if(i%2==0)
	{
		printf("它是偶数\n");
	}
	else
	{
		printf("它是奇数\n");
	}
}