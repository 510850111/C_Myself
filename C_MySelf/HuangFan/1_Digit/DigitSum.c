/*
	需求:
		输入计算并输出一个三位整数的个位,十位和百位数字之和.
		如:输入256,计算2+5+6,输出13.

	分析:
		要计算出数字的个位,十位和百位数字之和,必须要先算出个位,十位和百位数字.
		得出三位数字之后再进行计算并输出.

	实现:
		使用scanf函数得到InputNumber,其语法是scanf("%d",&InputNumber);
		可以使用如下方式计算各个位数:
			百位:	InputNumber / 100;	//因为InputNumber是整数,直接除以100就计算出了百位,小数位数直接舍去(不是四舍五入)
			十位:	(InputNumber - 百位*100) / 10;	//InputNumber-百位*100 就得到个位和十位,再除以10得到十位,小数位数直接舍去.
			个位:	InputNumber % 10;	//InputNumber对10取余就直接得到个位.
		最后使用printf函数输出.

	注意:
		A:我只会在前几次给你写需求分析和实现,以后我只会写需求,不会写分析和实现,以后你需要自己写.
		B:记得随时写注释,不仅是给自己看,也是给别人看.
		C:需求分析实现至少需要占到整个代码的1/3,这样有助于理清思路.
*/

#include <windows.h>
#include <stdio.h>
int main()
{
	int InputNumber;	/*输入的整数*/
	int HundredNumber, DecadeNumber, UnitNumber; /*百位数,十位数,个位数*/
	int Sum;		/*三位数之和*/
	printf("请输入一个整数:");
	scanf("%d", &InputNumber);
	HundredNumber = InputNumber / 100;	/*计算百位数*/
	DecadeNumber = (InputNumber - HundredNumber * 100 ) / 10;	/*计算十位数*/
	UnitNumber = InputNumber % 10;		/*计算个位数*/
	Sum = HundredNumber + DecadeNumber + UnitNumber;		/*计算三位数之和*/
	printf("Sum = %d\n", Sum );
	system("pause");
	return 0;
}

