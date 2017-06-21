#include <windows.h>
#include <stdio.h>
#include <string.h>

#define Size 100 
int Palindromic_Number(char Arry[],int Half_Chars,int StrLenth);
int main()//回文数判断
{
	int StrLenth=0;
	char Arry[Size]={0};
	system ("Title 回文数判断");
    printf("请输入%d个数以内的数字:",Size);
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
	    printf("是回文数!\n");
	}
	else if(Arry[Half_Chars] == Arry[StrLenth-1 - Half_Chars])
	{
		Palindromic_Number( Arry, Half_Chars-1, StrLenth);
	}
	else
	{
		printf("不是回文数!\n");
	}
	return 0;
}
