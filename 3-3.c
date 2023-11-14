//例题3-3
/*
	输入三个整数并判断其中最小的一个
*/
#include<stdio.h>
void main()
{
	int a,b,c,min;
	
	printf("输入a,b,c三个整数：");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a<b)
		min = a ; 
	else
		min = b ;
	if(c<min)
		min = c ;
	
	printf("最小者 = %d \n",min);
}