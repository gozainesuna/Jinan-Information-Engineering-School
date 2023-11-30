<<<<<<< Updated upstream
﻿//习题4-14-2
/*
	输入一个数字a和整数n,s=a+aa+aaa+a...a
	最后一项为n个a。计算并输出s的值
	eg:a=2,n=5时，s=2+22+222+2222+22222=24690
=======
﻿//习题 4-14-2
/*		 
	输入一个数字a和一个整数n。s=a+aa+aaa+a...a
	最后一项为n个a。计算并输出s的值
	eg:当a=2,n=5时，s=2+22+222+2222+22222
>>>>>>> Stashed changes
*/
#include<stdio.h>
void main()
{
	int a,n,i,s=0,t;
	
<<<<<<< Updated upstream
	printf("a=");
	scanf("%d",&a);
	printf("n=");
	scanf("%d",&n);
=======
	printf("a="); scanf("%d",&a);
	printf("n="); scanf("%d",&n);
>>>>>>> Stashed changes
	
	t=a;
	
	for( i=1; i<=n; i++ )
	{
		s+=t;
		t=t*10+a;
	}
	
	printf("s=%d\n",s);
}