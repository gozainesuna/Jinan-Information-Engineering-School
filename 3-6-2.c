//例题3-6-2
#include<stdio.h>
void main()
{
	float x,y;
	scanf("%f %f",&x,&y);
	
	if(  (  x>=-2  &&  x<=2)  &&  (  y>=-2  &&  y<=2  )  )
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
}