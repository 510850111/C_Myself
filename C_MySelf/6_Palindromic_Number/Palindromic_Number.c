#include <windows.h>
#include <stdio.h>
#include <string.h>

#define Size 100 
int Palindromic_Number(char Arry[],int Half_Chars,int StrLenth);
int main()//�������ж�
{
	int StrLenth=0;
	char Arry[Size]={0};
	system ("Title �������ж�");
    printf("������%d�������ڵ�����:",Size);
    scanf("%s",&Arry);
    StrLenth=strlen(Arry);
    Palindromic_Number(Arry,((StrLenth%2) ? (StrLenth/2 -1):(StrLenth/2)),StrLenth);
    system("pause");
    return 0;
}

int Palindromic_Number(char Arry[],int Half_Chars,int StrLenth)
{
	if(Half_Chars == 0 && Arry[Half_Chars] == Arry[StrLenth-1 - Half_Chars] )
	{
	    printf("�ǻ�����!\n");
	}
	else if(Arry[Half_Chars] == Arry[StrLenth-1 - Half_Chars])
	{
		Palindromic_Number( Arry, Half_Chars-1, StrLenth);
	}
	else
	{
		printf("���ǻ�����!\n");
	}
	return 0;
}
