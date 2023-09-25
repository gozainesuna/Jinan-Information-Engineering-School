//求1+2+3+4+5之和
#include<stdio.h>
void main()
{
	int sum,i;
	sum = 0;
	i = 1;
	while(i<5)
	{
		sum = sum+i;
		i = i+1;
	}
	printf("1+2+3+4+5=%d\n",sum);
	printf("i=%d",i);
}