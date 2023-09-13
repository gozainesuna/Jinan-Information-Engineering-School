//输入一个四位数并将它的四个数倒序输出
//总第8课
//23/6/15创建

#include<stdio.h>
void main()
{
	int num;
	int a,b,c,d;
	
	printf("请输入四个整数:");
	scanf("%d",&num);
	
	a = num%10;//取4
	printf("%d",a);
	
	b = num%100/10;//取3
	printf("%d",b);
	
	c = num/100%10;//取2
	printf("%d",c);
	
	d = num/1000;//取1
	printf("%d",d);
}