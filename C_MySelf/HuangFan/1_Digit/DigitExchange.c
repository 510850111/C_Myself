/*
	����:
		������㲢���һ����λ����������.
		��:����-256,���Ը���,���652

	����:
		Ҫ�������һ����λ��,����Ҫ�������λ,ʮλ�Ͱ�λ����.
		�ó���λ����֮���ٽ��м��������.

	ʵ��:
		ʹ��scanf�����õ�InputNumber,���﷨��scanf("%d",&InputNumber);
		����ʹ�����·�ʽ�������λ��:
			��λ:	InputNumber / 100;	//��ΪInputNumber������,ֱ�ӳ���100�ͼ�����˰�λ,С��λ��ֱ����ȥ(������������)
			ʮλ:	(InputNumber - ��λ*100) / 10;	//InputNumber-��λ*100 �͵õ���λ��ʮλ,�ٳ���10�õ�ʮλ,С��λ��ֱ����ȥ.
			��λ:	InputNumber % 10;	//InputNumber��10ȡ���ֱ�ӵõ���λ.
		�õ���λ��֮��,�ٽ��м���:
			��λ*100 + ʮλ*10 + ��λ;
		���ʹ��printf�������.
*/

#include <windows.h>
#include <stdio.h>
int main()
{
	int InputNumber;	/*���������*/
	int HundredNumber, DecadeNumber, UnitNumber; /*��λ��,ʮλ��,��λ��*/
	int ExchangeSum;		/*������λ��֮��*/
	printf("������һ������:");
	scanf("%d", &InputNumber);
	if (InputNumber < 0)  InputNumber = -InputNumber;	/*�ж�����������ǲ��Ǹ���,�����,�Ͱ�����Ϊ����*/
	HundredNumber = InputNumber / 100;	/*�����λ��*/
	DecadeNumber = (InputNumber - HundredNumber * 100 ) / 10;	/*����ʮλ��*/
	UnitNumber = InputNumber % 10;		/*�����λ��*/
	ExchangeSum = UnitNumber * 100 + DecadeNumber * 10 + HundredNumber;	/*������λ��֮��*/
	printf("ExchangeSum = %d\n", ExchangeSum );
	system("pause");
	return 0;
}
