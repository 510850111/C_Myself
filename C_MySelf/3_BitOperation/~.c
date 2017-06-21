#include <windows.h>
#include <stdio.h>
//按位取反
int main()
{
    int num1=0;
    system ("Title 按位取反");
    printf("请输入一个数:");
    scanf("%d",&num1);
    printf("~%d =%d \n",num1,~num1 );
    system("pause");
    return 0;
}

