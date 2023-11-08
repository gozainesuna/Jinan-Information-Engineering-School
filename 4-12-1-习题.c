//习题 4-12-1
/*
	孙悟空大闹蟠桃园，每天吃掉前一天剩下的一半多一个
  	到第N天的时候发现仅剩一个桃子
  	请问第一天原本有多少桃子。N从键盘输入
*/

#include<stdio.h>
void main()
{
	int i,N,x=1;
	
	printf("请输入N的值：");
	scanf("%d",&N);
	
	for( i=N-1; i>=1; i-- )
	{
		x=(x+1)*2;
	}
	
	printf("第一天原来有%d个桃子\n",x);
}