#include <windows.h>
#include <stdio.h>
//�������
/*�ڲ�ʹ����ʱ����������½���������������*/
int main()
{
    int num1=0,num2=0;
    system ("Title �������-��������");
    printf("������������,�ÿո����:");
    scanf("%d %d",&num1,&num2);
    num1=num1^num2;
    num2=num2^num1;
    num1=num1^num2;
    printf("num1=%d,num2=%d\n",num1,num2);
    system("pause");
    return 0;
}

