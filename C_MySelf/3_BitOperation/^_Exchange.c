#include <windows.h>
#include <stdio.h>
//异或运算
/*在不使用临时变量的情况下交换两个数的数据*/
int main()
{
    int num1=0,num2=0;
    system ("Title 异或运算-交换数据");
    printf("请输入两个数,用空格隔开:");
    scanf("%d %d",&num1,&num2);
    num1=num1^num2;
    num2=num2^num1;
    num1=num1^num2;
    printf("num1=%d,num2=%d\n",num1,num2);
    system("pause");
    return 0;
}

