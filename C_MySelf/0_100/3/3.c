/*
题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
1.程序分析：在10万以内判断，先将该数加上100后再开方，再将该数加上268后再开方，
如果开方后的结果满足如下条件，即是结果。
*/
#include <windows.h>
#include <stdio.h>
#include <math.h>

void test();
int main()
{
    test();
    system("pause");
    return 0;
}
void test()
{
	int x=0,y=0;
	for (int i = -1; i < 100000; ++i)
	{
		x=sqrt(i+100);
		y=sqrt(i+268);

		if((x*x == (i+100)) && (y*y == (i+268)))	
		{
			printf("=================================\n");
			printf("i=%d,x=%d,y=%d\n", i,x,y);
			printf("=================================\n");
		}
		
	}
}

