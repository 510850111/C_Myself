#include <windows.h>
#include <stdio.h>
#include <string.h>
struct employee
{
	int num;
	char name[20];
	float salary;
};
int search(struct employee *e,char *name);
int main()
{
	struct employee emp[10]=
	{
		{001,"lemon",2000},
		{002,"Apple",2500},
		{003,"Bnana",3000},
	};
	char name[20];
    printf("请输入要查找的员工姓名:");
    scanf("%s",&name);
    search(emp,name);

    system("pause");
    return 0;
}

int search(struct employee *e,char *name)
{
	for (int i = 0; i < 10; i++)
	{	
		if(strcmp(e[i].name,name)==0)/*相等返回0*/
		{
		  printf("==============================\n");
		  printf("Name\tNumber\tSalary\n");
		  printf("%s\t%d\t%5.2f\n",e[i].name,e[i].num,e[i].salary);
		  printf("==============================\n");
		  break;
		}
		if (i == 9)
		{
			printf("Not Found!!!\n");
		}
	}

	return 0;
}
