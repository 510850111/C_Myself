#include <windows.h>
#include <stdio.h>
#include <string.h>
int Lenth(char *p);
int main()
{
    char Str[512]={0};
    system("Title 求字符串中字符的个数");
    printf("请输入字符串:");
    gets(Str);
    printf("一共有%d个字符.\n",Lenth(Str));	
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
