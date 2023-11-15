#include<stdio.h>
void main()
{
	int i;
	float a=3.0,b=5.0,s=0.0;
	
	for( i=1; i<=20; i++ )
	{
		s=s+a/b;
		a=a+2;
		b=b+2;
	}
	printf("s=%7.2f\n",s);
}