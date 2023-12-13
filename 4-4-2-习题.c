//习题4-4-2
/*
	
*/
#include<stdio.h>
void main()
{
	int n=0;
	char ch;
	
	while( (ch=getchar())!='\n')
	{
		if( ch>='A' && ch<='Z' || ch>='a' && ch<='z' )
		{
			n++;
		}
	}
}