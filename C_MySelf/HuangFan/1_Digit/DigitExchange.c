/*
	需求:
		输入计算并输出一个三位整数逆序数.
		如:输入-256,忽略负号,输出652

	分析:
		要逆序输出一个三位数,必须要先算出个位,十位和百位数字.
		得出三位数字之后再进行计算再输出.

	实现:
		使用scanf函数得到InputNumber,其语法是scanf("%d",&InputNumber);
		可以使用如下方式计算各个位数:
			百位:	InputNumber / 100;	//因为InputNumber是整数,直接除以100就计算出了百位,小数位数直接舍去(不是四舍五入)
			十位:	(InputNumber - 百位*100) / 10;	//InputNumber-百位*100 就得到个位和十位,再除以10得到十位,小数位数直接舍去.
			个位:	InputNumber % 10;	//InputNumber对10取余就直接得到个位.
		得到三位数之后,再进行计算:
			个位*100 + 十位*10 + 百位;
		最后使用printf函数输出.
*/

#include <windows.h>
#include <stdio.h>
int main()
{
	int InputNumber;	/*输入的整数*/
	int HundredNumber, DecadeNumber, UnitNumber; /*百位数,十位数,个位数*/
	int ExchangeSum;		/*逆序三位数之和*/
	printf("请输入一个整数:");
	scanf("%d", &InputNumber);
	if (InputNumber < 0)  InputNumber = -InputNumber;	/*判断输入的数据是不是负数,如果是,就把它变为正数*/
	HundredNumber = InputNumber / 100;	/*计算百位数*/
	DecadeNumber = (InputNumber - HundredNumber * 100 ) / 10;	/*计算十位数*/
	UnitNumber = InputNumber % 10;		/*计算个位数*/
	ExchangeSum = UnitNumber * 100 + DecadeNumber * 10 + HundredNumber;	/*计算三位数之和*/
	printf("ExchangeSum = %d\n", ExchangeSum );
	system("pause");
	return 0;
}
