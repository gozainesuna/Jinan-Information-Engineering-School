//例题4-10-2
//输出100-200之间的所有素数

#include<stio.h>
#include<math.h>
void main()
{
	int num,i,tag,m,cnt=0;
	
	for( num=101; num<200; num+=2 )
	{
		tag=1;
		m=sqrt(num);
		
		for( i=2; i<=m; i++ )
		{
			if( num%i==0 )
			{
				tag=0;
				break;
			}
		}
		
		if( tag==1 )
		{
			printf("%4d",num);
			cnt++
			
			if( cnt%12==0 )
			{
				printf("\n")
			}
		}
	}
}