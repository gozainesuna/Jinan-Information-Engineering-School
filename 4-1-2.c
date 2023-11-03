//例题4-1-2
//求1+2+3+4+5......+100之和
#include<stdio.h>
void main()
{
	int sum;
	int i;
	
	while(i<100);
	{
		sum = sum+i;
		i = i=1;
	}
	
	printf("1+2+3+4+5......+100 = %d\n",sum);
}