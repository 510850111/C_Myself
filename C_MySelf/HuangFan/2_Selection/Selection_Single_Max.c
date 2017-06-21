/*
	需求:
		使用单分支条件语句求出输入的两个整数的最大值;

	分析:
		A:单分支条件语句实质上就是if条件语句.
		B:要求出最大值,可以使用两个if语句完成:
			1.如果a>=b,max = a;
			2.如果a<=b.max = b;
		C:最后输出max;

	实现:
		输入可以使用scanf语句,其语法格式为scanf("%d %d",&a,&b);
		在比较中可以用两个if语句:
			if ( a >= b ) max = a;
			if ( a <= b ) max = b;
		最后使用printf输出max
*/

#include <windows.h>
#include <stdio.h>

int main()
{
	int a, b, max;	/*定义要输入的两个数,max是最大值*/
	printf("请输入两个整数,中间使用空格隔开:");
	scanf("%d %d", &a, &b);
	if ( a >= b ) max = a;		/*a与b进行比较*/
	if ( a <= b ) max = b;
	printf("max = %d\n", max);	/*输出最大值*/

	system("pause");
	return 0;
}

