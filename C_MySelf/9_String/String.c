#include <windows.h>
#include <stdio.h>
#include <string.h>
int Lenth(char *p);
int main()
{
    char Str[512]={0};
    system("Title ���ַ������ַ��ĸ���");
    printf("�������ַ���:");
    gets(Str);
    printf("һ����%d���ַ�.\n",Lenth(Str));	
    system("pause");
    return 0;
}

int Lenth(char *p)
{
	int n=0;
	while(*p != '\0')		
	{
	  p++;
	  n++;
	}
	return n;
}
