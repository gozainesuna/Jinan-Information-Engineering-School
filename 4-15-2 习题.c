//习题4-15-2
/*
	用下面的公式求PI的近似值，直到最后一项小于0.0001为止
*/
#include<stdio.h>
#include<math.h>
void main()
{
	int b=1, sign=1;
	float sum=0.0, t=1.0;
	
	while(fab(t)>=0.0001)
	{
		t=1.0/b;
		sum+=t*sign;
		sign=-sign;
		b+=2;
	}
	printf("PI=%f\n",a*sum);
}