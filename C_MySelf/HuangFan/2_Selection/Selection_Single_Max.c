/*
	����:
		ʹ�õ���֧����������������������������ֵ;

	����:
		A:����֧�������ʵ���Ͼ���if�������.
		B:Ҫ������ֵ,����ʹ������if������:
			1.���a>=b,max = a;
			2.���a<=b.max = b;
		C:������max;

	ʵ��:
		�������ʹ��scanf���,���﷨��ʽΪscanf("%d %d",&a,&b);
		�ڱȽ��п���������if���:
			if ( a >= b ) max = a;
			if ( a <= b ) max = b;
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
	if ( a <= b ) max = b;
	printf("max = %d\n", max);	/*������ֵ*/

	system("pause");
	return 0;
}

