#include<stdio.h>
#include <windows.h>
#define DY_do 131
#define D_sdo 139
#define DY_re 147
#define D_sre 156
#define DY_mi 165
#define DY_fa 175
#define D_sfa 185
#define DY_so 196
#define D_sso 208
#define DY_la 220
#define D_sla 233
#define DY_xi 247
#define ZY_do 262
#define Z_sdo 277
#define ZY_re 294
#define Z_sre 311
#define ZY_mi 330
#define ZY_fa 349
#define Z_sfa 370
#define ZY_so 392
#define Z_sso 415
#define ZY_la 440
#define Z_sla 466
#define ZY_xi 494
#define GY_do 523
#define G_sdo 554
#define GY_re 587
#define G_sre 622
#define GY_mi 659
#define GY_fa 698
#define G_sfa 740
#define GY_so 784
#define G_sso 831
#define GY_la 880
#define G_sla 932
#define GY_xi 988
#define CY_do 1046
#define C_sdo 1108
#define CY_re 1174
#define C_sre 1244
#define CY_mi 1318
#define CY_fa 1396
#define C_sfa 1480
#define CY_so 1568
#define C_sso 1661
#define CY_la 1760
#define C_sla 1864
#define CY_xi 1976
#define SY_do 2092
#define S_sdo 2216
#define SY_re 2348
#define S_sre 2488
#define SY_mi 2636
#define SY_fa 2792
#define S_sfa 2960
#define SY_so 3136
#define S_sso 3322
#define SY_la 3520
#define S_sla 3728
#define SY_xi 3952


int main()
{
	system ("Title ���Ӷ�����");
	int const Time = 290;

	//����Ļ���
	printf("����Ļ���\n");
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_do, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Sleep(Time * 3);

	//���������
	printf("���������\n");
	Sleep(Time);
	Beep(DY_so, Time);
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_mi, Time);
	Sleep(3 * Time);

	//���ﴺ�����
	printf("���ﴺ�����\n");
	Sleep(Time);
	Beep(ZY_mi, Time / 1.5);
	Beep(ZY_mi, Time);
	Beep(ZY_la, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_re, Time);
	Sleep(Time * 2);

	//�����̲�����
	printf("�����̲�����\n");
	Sleep(Time * 2);
	Beep(DY_xi, Time / 1.5);
	Beep(DY_xi, Time);
	Beep(ZY_do, Time);
	Beep(ZY_re, Time);
	Sleep(Time / 5);
	Beep(ZY_fa, Time);
	Beep(ZY_mi, Time);
	Sleep(Time * 3);

	//�¹�Ѱ���
	printf("�¹�Ѱ���\n");
	Sleep(Time * 2);
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_do, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Sleep(Time * 3);

	//�����˺���
	printf("�����˺���\n");
	Sleep(Time);
	Beep(DY_so, Time);
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_mi, Time);
	Sleep(3 * Time);

	//�����˵�����
	printf("�����˵�����\n");
	Sleep(Time);
	Beep(ZY_mi, Time / 1.5);
	Beep(ZY_mi, Time);
	Beep(ZY_la, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_re, Time);
	Sleep(Time);

	//��������ҹ��
	printf("��������ҹ��\n");
	Sleep(Time * 2);
	Beep(DY_xi, Time / 1.5);
	Beep(DY_xi, Time);
	Beep(ZY_mi, Time);
	Beep(ZY_re, Time * 1.5);
	Beep(ZY_do, Time / 5);
	Beep(DY_xi, Time);
	Beep(DY_la, Time);
	Sleep(Time);


	//�������Ժ�
	printf("�������Ժ�\n");
	Beep(DY_la, Time / 5);
	Beep(DY_la, Time);
	Beep(DY_la, Time);
	Beep(ZY_la, Time);
	Beep(ZY_la, Time * 3);
	Sleep(Time );

	//���ư�����
	printf("���ư�����\n");
	Sleep(Time * 2);
	Beep(DY_la, Time / 5);
	Beep(ZY_la, Time);
	Sleep(Time);
	Beep(ZY_so, Time / 3);
	Beep(ZY_la, Time / 3);
	Beep(ZY_so, Time / 3);
	Sleep(Time);
	Beep(ZY_mi, Time * 3);
	Sleep(Time * 2);

	//�Ǳ任�ĽŲ�
	printf("�Ǳ任�ĽŲ�\n");
	Sleep(Time);
	Beep(ZY_mi, Time / 1.5);
	Beep(ZY_mi, Time);
	Beep(ZY_la, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_re, Time);
	Sleep(Time * 2);


	//��������ǣ��
	printf("��������ǣ��\n");
	Sleep(Time * 2);
	Beep(DY_xi, Time / 1.5);
	Beep(DY_xi, Time);
	Beep(ZY_do, Time);
	Beep(ZY_re, Time);
	Sleep(Time / 5);
	Beep(ZY_fa, Time);
	Beep(ZY_mi, Time * 3);
	Sleep(Time * 3);


	//��һ��һ��
	printf("��һ��һ��\n");
	Beep(DY_la, Time / 5);
	Beep(DY_la, Time);
	Beep(DY_la, Time);
	Beep(ZY_la, Time);
	Beep(ZY_la, Time * 3);
	Sleep(Time * 3);

	//�ж�������
	printf("�ж�������\n");
	Sleep(Time);
	Beep(ZY_xi, Time / 5);
	Beep(GY_do, Time);
	Beep(GY_re, Time);
	Beep(GY_do, Time);
	Beep(ZY_mi, Time * 3);
	Sleep(Time );


	//����û���¹���ˮ������
	printf("����û���¹���ˮ��ҹ��\n");
	Sleep(Time);
	Beep(ZY_mi, Time / 5);
	Beep(ZY_mi, Time);
	Beep(ZY_la, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_re, Time);
	Sleep(Time * 2);
	Beep(ZY_so, Time);
	Beep(ZY_la, Time);
	Beep(ZY_xi, Time * 2.5);
	Beep(GY_mi, Time * 4);
	Beep(ZY_xi, Time);
	Beep(ZY_so, Time);
	Beep(ZY_mi, Time * 2);

	//����ĳһ��
	printf("����ĳһ��\n");
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_do, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time * 2);
	Sleep(Time * 2);

	//����������
	printf("����������\n");
	Sleep(Time);
	Beep(DY_so, Time);
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_mi, Time);
	Sleep(3 * Time);

	//������������
	printf("������������\n");
	Sleep(Time);
	Beep(ZY_mi, Time / 5);
	Beep(ZY_mi, Time);
	Beep(ZY_la, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time * 1.2);
	Beep(ZY_re, Time * 2);
	Sleep(Time * 2);

	//�ڱ��Ӷ�����
	printf("�ڱ��Ӷ�����\n");
	Sleep(Time);
	Beep(DY_xi, Time);
	Beep(DY_xi, Time);
	Beep(ZY_mi, Time);
	Beep(ZY_re, Time * 1.5);
	Beep(DY_xi, Time / 5);
	Beep(DY_re, Time / 5);
	Beep(DY_la, Time * 3);
	Sleep(Time * 3);

	system("pause");
	return 0;
}

