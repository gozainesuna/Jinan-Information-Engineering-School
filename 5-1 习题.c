//习题5-1
/*
	从键盘上输入10个数，并将这10个数逆序输出
*/
#include<stdio.h>
void main()
{
	int a[10],i;
	
	printf("“输入10个整数：\n");
	for( i=0; i<=9; i++ )
	{
		scanf("%d",&a[i]);
	}
	for( i=9; i>=0; i-- )
	{
		printf("%d",a[i])
	}
}