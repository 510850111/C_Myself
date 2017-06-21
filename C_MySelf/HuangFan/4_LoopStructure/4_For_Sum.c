/*
	需求:
		输入一个数,使用for循环计算出1+2+3+....+n的数.
		Example:
			输入:100	输出:5050
			输入:-100	输出-5050
*/

#include <windows.h>
#include <stdio.h>

int main()
{
	int InputNumber, flag = 0;	//flag用于标记是否为负数
	long Sum = 0;
	printf("请输入一个数:");
	scanf("%ld", &InputNumber);

	if (InputNumber < 0)
	{
		flag = 1;
		InputNumber = -InputNumber; 
	}

	for (int i = 0; i <= InputNumber; i++)
	{
		Sum = Sum + i;
	}

	if(flag == 1)	Sum = -Sum;
	printf("Sum = %ld\n", Sum);
	
	system("pause");
	return 0;
}

