﻿#include <stdio.h>
#define youhuilv printf("优惠率为 %d %%",r)

void main()
{
    int m; // 月份
    int n; // 数量
    int r; // 优惠率

    printf("请输入月份(m)和数量(n)：");
    scanf("%d", &m);

    if( m==6 || m==12)
    {
    	r = 10;
        youhuilv;
	}
	
	else
	{
		scanf("%d",&n);
	}

    if ( m>=7 && m<=9 )
    {
		if( n>=20 )
		{
			r = 15;
			youhuilv;
		} 
		
		else if( n<20 && n>=1 )
		{
			r = 5;
			youhuilv;
		}
    }
    
	else if ( m>=1 && m<=5 || m==10 || m==11 )
    {
        if( n>=20 )
		{
			r = 30;
			youhuilv;
		} 
		
		else if( n<20 && n>=1 )
		{
			r = 20;
			youhuilv;
		}
    }
    
/*	else if ( m==6 || m==12 )
    {
        printf("");     
    }*/
    
	else if ( m<1 || m>12)
    {
    	printf("月份输入错误");
	}

}