#include<stdio.h>
void main()
{
	int a,n,i,s=0,t=0;
	
	printf("a=");
	scanf("%d",&a);
	printf("n=");
	scanf("%d",&n);
	for( i=1; i<=n; i++ )
	{
		t=t*10+a;
		s+=t;
	}
	printf("s=%d\n",s);
}