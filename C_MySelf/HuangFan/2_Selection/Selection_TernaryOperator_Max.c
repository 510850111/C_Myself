/*
	需求:
		使用三目运算符求出输入的两个整数的最大值;

	分析:
		A:三目运算符的形式为:	
			表达式1 ? 表达式2 : 表达式3
		B:三目运算符的实质:
			首先算表达式1是否为真,如果为真就执行表达式2,否则执行表达式3

	实现:
		输入可以使用scanf语句,其语法格式为scanf("%d %d",&a,&b);
		使用三目运算符:
			a >= b ? max = a : max = b;
		为了好看就加个括号:
			( a >= b ) ? ( max = a ) : ( max = b);
		最后使用printf输出max
*/

#include <windows.h>
#include <stdio.h>

int main()
{
	int a, b, max;	/*定义要输入的两个数,max是最大值*/
	printf("请输入两个整数,中间使用空格隔开:");
	scanf("%d %d", &a, &b);
	( a >= b ) ? ( max = a ) : ( max = b);
	printf("max = %d\n", max);	/*输出最大值*/

	system("pause");
	return 0;
}

