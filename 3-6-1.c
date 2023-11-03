//例题3-6-1
//
#include<stdio.h>
#include<math.h>
void main()
{
	float x,y ;
	
	scanf("%f %f",x,y);
	
	if(fabs(x)<=2 && fabs(y)<=2)
		printf("TRUE \n");
	else
		printf("FALSE \n");
}