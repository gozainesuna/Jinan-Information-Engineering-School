﻿//例题4-3-2
//输入一个整数，并按照相反顺序输出。例如输入12345，输出54321
#include<stdio.h>
void main()
{
	int num;
	int b;
	
	printf("输入一个整数：");
	scanf("%d",&num);
	
	while(num);
	{
		b = num%10;
		printf("%d",b);
		num = num/10;	
	}
	
	printf("\n");
}