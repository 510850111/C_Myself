#include <windows.h>
#include <stdio.h>
struct student
{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
};
int main()
{
    struct student stu ={001,"lemon",'F',23,95};
    printf("学生信息如下:\n");
    printf(" 姓名:%s\n 学号:%d\n 性别:%c\n 年龄:%d\n 分数:%5.1f\n", stu.name,stu.num,stu.sex,stu.age,stu.score);
    system("pause");
    return 0;
}
