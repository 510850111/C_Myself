/*
��Ŀ����ҵ���ŵĽ������������ɡ�
����(I)���ڻ����10��Ԫʱ���������10%��
�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
40��60��֮��ʱ,����40��Ԫ�Ĳ��֣������3%��
60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ�
�Ӽ������뵱������I����Ӧ���Ž���������
1.����������������������ֽ磬��λ��ע�ⶨ��ʱ��ѽ���������͡�
*/

#include <windows.h>
#include <stdio.h>
int JiangJin(double I);
int main()
{
    double I=0.00;//����(��Ԫ)
    double k=0;
    printf("�����뵱������: ");
    scanf("%d",&I);
    printf("���Ϊ: %lf ��Ԫ",JiangJin(I));		
    system("pause");
    return 0;
}

int JiangJin(double I)
{
	printf("%s---I=%d\n",__func__,I );
	int j=0;
	j = I*0.1;
	printf("j=%d\n",j);
	switch (j)
	{
		case 0:
			return I * 0.1;	
		case 1:
			return (I-10)* 0.075+1;	
		case 2:
		case 3: 
			return (I-20) *0.05;	
		case 4: 
		case 5: 
			return (I-40) *0.03;
		case 6: 
		case 7: 
		case 8: 
		case 9: 
			return (I-60) *0.015;
		default :
			return (I-100) *0.01;
	}
}
