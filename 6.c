//输入三个字符，并分别输出。1.顺序输出三个字符 2.顺序输出三个字符的ASCII码 3.倒序输出三个字符
//总第6课
//2023/6/13创建

#include<stdio.h>
void main()
{
	char a,b,c; //字符类型标识符
	a = getchar();
	b = getchar();
	c = getchar();
	
	printf("%c %c %c \n",a,b,c);//%c是字符型标识符的格式符
	printf("%d %d %d \n",a,b,c);//%d是整形格式符
	printf("%c %c %c",c,b,a);
	
}