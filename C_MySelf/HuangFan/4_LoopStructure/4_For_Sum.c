/*
	����:
		����һ����,ʹ��forѭ�������1+2+3+....+n����.
		Example:
			����:100	���:5050
			����:-100	���-5050
*/

#include <windows.h>
#include <stdio.h>

int main()
{
	int InputNumber, flag = 0;	//flag���ڱ���Ƿ�Ϊ����
	long Sum = 0;
	printf("������һ����:");
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

