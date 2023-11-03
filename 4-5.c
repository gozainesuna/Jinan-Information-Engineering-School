//例题4-5
//在键盘上输入若干个整数，直到输入0为止，求它们的乘积
#include<stdio.h>
void main()
{
	int n ;
	long t = 1 ;

	printf("输入若干个整数，指代输入0为止：\n");
	scanf("%d",&n);
	
	if( n==0 )
	{
		t = 0;
		printf("%ld",t);
	}
	
	else
	{
		while( n!=0 ) 
		{
		 	t = t*n;
		 	scanf("%d",&n);
		}
		 
		printf("%ld\n",t);
	}
}