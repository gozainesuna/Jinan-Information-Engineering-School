//习题 4-14-1
/*	
	输入一个数字a和一个整数n。s=a+aa+aaa+a...a
	最后一项为n个a。计算并输出s的值
	eg:当a=2,n=5时，s=2+22+222+2222+22222
*/
#include<stdio.h>
void main()
{
	int a,n,i,s=0,t=0;
	
	printf("a="); scanf("%d",&a);
	printf("n="); scanf("%d",&n);
	
	for( i=1; i<=n; i++ )
	{
		t=t*10+a;
		s+=t;
	}
	printf("s=%d\n",s);
}