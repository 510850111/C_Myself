/*
	����:
		ʹ��switch�����һ��������,Ҫ�������򵥵ļӼ��˳�����,��:
			����:1+2 	���:1+2=3
			����:12-8	���:12-8=4
			����:5/0	���:0������Ϊ������!
			����:5*6	���5*6=30
			......
	��ʾ:���Բο�P73.
*/

#include<windows.h>
#include <stdio.h>
int  jisuan(int  a, char b, int  c);

int main()
{
	int  num1 = 0;
	int  num2 = 0;
	char op;//�����

	printf("���������ʽ: ");
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
					printf("0������Ϊ������!\n");
					return 0;
				}	
				else		return a / c;
		default   :
			printf("\n����Ƿ�!\n");
	}
	return 0;
}

