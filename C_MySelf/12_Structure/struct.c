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
    printf("ѧ����Ϣ����:\n");
    printf(" ����:%s\n ѧ��:%d\n �Ա�:%c\n ����:%d\n ����:%5.1f\n", stu.name,stu.num,stu.sex,stu.age,stu.score);
    system("pause");
    return 0;
}
