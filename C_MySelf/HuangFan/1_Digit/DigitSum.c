/*
	����:
		������㲢���һ����λ�����ĸ�λ,ʮλ�Ͱ�λ����֮��.
		��:����256,����2+5+6,���13.

	����:
		Ҫ��������ֵĸ�λ,ʮλ�Ͱ�λ����֮��,����Ҫ�������λ,ʮλ�Ͱ�λ����.
		�ó���λ����֮���ٽ��м��㲢���.

	ʵ��:
		ʹ��scanf�����õ�InputNumber,���﷨��scanf("%d",&InputNumber);
		����ʹ�����·�ʽ�������λ��:
			��λ:	InputNumber / 100;	//��ΪInputNumber������,ֱ�ӳ���100�ͼ�����˰�λ,С��λ��ֱ����ȥ(������������)
			ʮλ:	(InputNumber - ��λ*100) / 10;	//InputNumber-��λ*100 �͵õ���λ��ʮλ,�ٳ���10�õ�ʮλ,С��λ��ֱ����ȥ.
			��λ:	InputNumber % 10;	//InputNumber��10ȡ���ֱ�ӵõ���λ.
		���ʹ��printf�������.

	ע��:
		A:��ֻ����ǰ���θ���д���������ʵ��,�Ժ���ֻ��д����,����д������ʵ��,�Ժ�����Ҫ�Լ�д.
		B:�ǵ���ʱдע��,�����Ǹ��Լ���,Ҳ�Ǹ����˿�.
		C:�������ʵ��������Ҫռ�����������1/3,��������������˼·.
*/

#include <windows.h>
#include <stdio.h>
int main()
{
	int InputNumber;	/*���������*/
	int HundredNumber, DecadeNumber, UnitNumber; /*��λ��,ʮλ��,��λ��*/
	int Sum;		/*��λ��֮��*/
	printf("������һ������:");
	scanf("%d", &InputNumber);
	HundredNumber = InputNumber / 100;	/*�����λ��*/
	DecadeNumber = (InputNumber - HundredNumber * 100 ) / 10;	/*����ʮλ��*/
	UnitNumber = InputNumber % 10;		/*�����λ��*/
	Sum = HundredNumber + DecadeNumber + UnitNumber;		/*������λ��֮��*/
	printf("Sum = %d\n", Sum );
	system("pause");
	return 0;
}

