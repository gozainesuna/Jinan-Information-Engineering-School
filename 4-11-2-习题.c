//习题4-11-2
//小球从100M落下再反弹，每次反弹到下落高度的一半，求反弹10次后，小球共经过多少米
#include<stdio.h>
void main()
{
	float h=100;//高度，包含初始高度
	float sum=100;//距离累加器，包含初始下落距离
	int i;//下落次数计数器
	
	for( i=2; i<=10; i++ )
	{
		sum=sum+h;
		h=h/2;
	}
	printf("小球第十次落地时共经过%.2f米 \n",sum);
}