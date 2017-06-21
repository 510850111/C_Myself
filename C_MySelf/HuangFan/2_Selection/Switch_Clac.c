/*
	需求:
		使用switch语句做一个计算器,要求能做简单的加减乘除运算,如:
			输入:1+2 	输出:1+2=3
			输入:12-8	输出:12-8=4
			输入:5/0	输出:0不能作为被除数!
			输入:5*6	输出5*6=30
			......
	提示:可以参考P73.
*/

#include<windows.h>
#include <stdio.h>
int  jisuan(int  a, char b, int  c);

int main()
{
	int  num1 = 0;
	int  num2 = 0;
	char op;//计算符

	printf("请输入计算式: ");
	scanf("%d%c%d", &num1, &op, &num2);
	printf("%d%c%d=%d\n", num1, op, num2, jisuan(num1, op, num2));
	system ("pause");
	return 0;
}
int  jisuan(int  a, char b, int  c)
{
	switch (b)
	{
		case '+':	return a + c;
		case '-':	return a - c;
		case '*':	return a * c;
		case '/':
				if (c == 0)
				{
					printf("0不能作为被除数!\n");
					return 0;
				}	
				else		return a / c;
		default   :
			printf("\n输入非法!\n");
	}
	return 0;
}

