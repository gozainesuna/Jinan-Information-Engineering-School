//习题4-15-1
/*
	用下面的公式求PI的近似值，直到最后一项小于0.0001为止
*/
#include<stdio.h>
void main()
{
	int b=1, sign=1;
	float sum=0.0, t=1.0;
	
	while( fabs(t)>=0.0001 )
	{
		sum+=t*sign;
		b+=2
		t=1.0/b;
	}
	printf("PI=%f\n",4*sum);
}