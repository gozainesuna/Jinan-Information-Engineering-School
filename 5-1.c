//例题5-1
/*
	输入10个学生的成绩，先计算他们的总分，再输出他们的平均分
*/
#include<stdio.h>
void main()
{
	int i;
	float score[10],sum=0;
	
	printf("输入10个学生的成绩：");
	for( i=0; i<10; i++ )
	{
		scanf("%f",&score[i]);
		sum=score[i]+sum;
	}
	printf("平均分为%.2f",sum/10);
}