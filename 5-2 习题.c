//习题5-2
/*
	计算并输出一维数组{9,8,12,45,67,23,19,8,2,55,45,37.5}的
	最大值，最小值，平均值
*/
#include<stdio.h>
void main()
{
	float a[9]={9,8,12,45,67,23,19,8,2,55,45,37.5};
	float max=a[0],min=a[0],sum=0;
	int i;
	
	for( i=0; i<=8; i++ )
	{
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
		sum+=a[i];
	}
	printf("MAX=%.2f\n",max);
	printf("MIN=%.2f\n",min);
	printf("平均值 %.2f\n",sum/9)
}