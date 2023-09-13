//输入一个三位数，将这个数第一位和第三位换位 321输出123
//总第7课
//23/6/13

#include<stdio.h>
void main()
{	
	int num;
	int a,b,c;
	
	scanf("%d",&num);
	
	c = num%10;//个位
	printf("%d",c);
	
	b = num/10%10;//十位
	printf("%d",b);
	
	a = num/100;//百位
	printf("%d \n",a);
}
