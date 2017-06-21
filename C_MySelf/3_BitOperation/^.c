#include <windows.h>
#include <stdio.h>
//异或运算
int main()
{
    int num1=0,num2=0;
    system ("Title 异或运算");
    printf("请输入两个数,用空格隔开:");
    scanf("%d %d",&num1,&num2);
    printf("%d ^ %d =%d \n",num1,num2,num1^num2 );
    system("pause");
    return 0;
}

