/*
	�����һ�������ֵĳ���,ֻ��Ҫ���������Դ����ͺ���

*/

#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
int gamestart();//��ʼ��Ϸ
int makenumber();//�˺����������������
int ret(int guessnumber, int randnumber); //�˺��������ж��û���������ݺ�������Ĵ�С
int yes_or_no();//�ж��û��Ƿ��������ȥ

int main()//����һ�����û������ֵĳ���
{
	gamestart();
	system ("pause");
	return 0;
}
int gamestart()
{
	int guesstimes = 0;		//�û��²�Ĵ���
	int guessnumber = 0;		//�û����������
	int randnumber1 = 0;		//�����������
	int ret_ret = 0;			//ret�����ķ���ֵ
	randnumber1 = makenumber(); //���������
	printf("=====================\n");
	printf("������1~100֮�������\n");
	printf("=====================\n");
	while (1)
	{
		printf("\n");
		printf("������һ����:");
		scanf("%d", &guessnumber);
		ret_ret = ret(guessnumber, randnumber1); //��ȡret�����з��ص�-1,0,1�е�����ֵ
		guesstimes = guesstimes + 1;			 //�û��²�Ĵ���+1
		if (ret_ret == 0) break;				 //����û�����ȷ,����ѭ��
	}

	printf("\n");
	printf("========================\n");
	printf("�������%d,�����%d��\n", randnumber1, guesstimes);
	yes_or_no();

}
int makenumber()//�˺����������������
{
	int randnumber = 0;		//�����������
	srand((int) time(0));		//ʹ��ʱ������ʼ���������
	randnumber = rand() % 100 + 1; //��÷�Χ��1~100�������
	return randnumber;
}

int ret(int guessnumber, int randnumber) //�˺��������ж��û���������ݺ�������Ĵ�С
{
	int i = 0; //�û��Ƿ�¶�

	if (guessnumber > randnumber)
	{
		printf("��µ�������Ŷ\n");
		i = 1;
	}
	else if (guessnumber == randnumber)
	{
		printf("��ϲ�¶���\n");
		i = 0;
	}
	else
	{
		printf("��µ���С��Ŷ\n");
		i = -1;
	}
	return i;

}

int yes_or_no()
{
	while (1)
	{
		char yes_or_no_choose = 'y';		//�Ƿ��������ȥ
		printf("�㻹Ҫ��������ȥ��?(Y/N): ");
		getchar();				//��ȡ�ڴ��еĻس������λ��,�Է�ֹ��������쳣
		yes_or_no_choose = getchar();
		switch (yes_or_no_choose)
		{
		case 'y':
		case 'Y':
			gamestart();
		case 'n':
		case 'N':
			return 0;
		}
	}
}
