#include<stdio.h>
void main()
{
	int a,n,i,s=0,t;
	
	printf("a=");
	scanf("%d",&a);
	printf("n=");
	scanf("%d",n);
	
	t=a;
	
	for( i=1; i<=n; i++ )
	{
		s+=t;
		t=t*10+a;
	}
	printf("s=%d\n",s);
}