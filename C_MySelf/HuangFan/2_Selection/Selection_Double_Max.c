/*
	����:
		ʹ��˫��֧����������������������������ֵ;

	����:
		A:˫��֧�������ʵ���Ͼ���if-else�������.
		B:Ҫ������ֵ,����ʹ��һ��if-else������:
			���a>=b,max = a;
			����max = b;
			
		C:������max;

	ʵ��:
		�������ʹ��scanf���,���﷨��ʽΪscanf("%d %d",&a,&b);
		�ڱȽ��п�����һ��if-else���:
			if ( a >= b ) max = a;
			else 	       max = b;
		���ʹ��printf���max
*/

#include <windows.h>
#include <stdio.h>

int main()
{
	int a, b, max;	/*����Ҫ�����������,max�����ֵ*/
	printf("��������������,�м�ʹ�ÿո����:");
	scanf("%d %d", &a, &b);
	if ( a >= b ) max = a;		/*a��b���бȽ�*/
	else 	       max = b;
	printf("max = %d\n", max);	/*������ֵ*/

	system("pause");
	return 0;
}

