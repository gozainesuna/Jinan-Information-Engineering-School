//例题5-2
/*
	输出斐波那契数列前10个数的和
*/
void main()
{
	int i;
	int a[10]={1,1};
	
	for( i=2; i<10; i++ )
	{
		a[i]=a[i-1]+a[i-2];
	}
	for( i=0; i<10; i++ )
	{
		printf("%4d",a[i]);
	}
}