#include <windows.h>
#include <stdio.h>
//左移运算符 "<<"
int main()
{
    int num1=0,num2=0;
    system ("Title 左移运算");
    printf("请输入两个数,用空格隔开:");
    scanf("%d %d",&num1,&num2);
    printf("%d << %d =%d \n",num1,num2,num1<<num2 );
    system("pause");
    return 0;
}

