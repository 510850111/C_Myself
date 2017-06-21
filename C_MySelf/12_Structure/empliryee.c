/*员工管理系统*/
#include <windows.h>
#include <stdio.h>
#include <string.h>
#define N 100 /*最多有100名员工*/
int number=0;/*当前员工数量*/
struct employee
{
	int num;
	char name[20];
	float salary;
};
struct employee emp[N];
int Add_employee();			/*添加员工*/
int Del_employee();			/*删除员工*/
	int Del_Name_employee();/*按姓名删除*/
	int Del_Num_employee();	/*按编号删除*/
	int Del_Salary_employee();/*按工资删除*/
	int Del_Find_employee(char *name);	/*查找要删除的员工*/
int search_employee();			/*查找员工*/
int Look_employee();			/*查看全部员工*/
int from();/*界面*/
int main()
{
	system ("Title 员工管理系统");
	from();
    return 0;
}

int from()
	{
		int InputNumber=0;
		system ("cls");
		printf("====================================\n");
		printf("1.增添员工\t\t 2.删除员工\n");
		printf("3.查找员工\t\t 4.查看员工\n");
		printf("5.退出系统\t\n");
		printf("====================================\n");
		printf("请输入数字:");
		scanf("%d",&InputNumber);
		switch (InputNumber)
		{
			case 1:
				Add_employee();
				break;
			case 2:
				Del_employee();
				break;	
			case 3:
				search_employee();
				break;	
			case 4: 
				Look_employee();
				break;
			case 5: 
				system ("exit");
			default   :
				from();
		}
	}

int Add_employee()
	{
		system ("cls");
		for (int i = number; i < N; i++)
		{
			system ("cls");
			printf("====================================\n");
			printf("工资输入负数时结束输入\n\n");
			emp[i].num=i;
			printf("员工编号:%d\n", emp[i].num);
			printf("请输入员工姓名:");
			scanf("%s",&emp[i].name);
			printf("请输入员工工资:");
			scanf("%f",&emp[i].salary);
			if(emp[i].salary < 0) 
			{
				emp[i]=emp[i+1];
				emp[i].num=i-1;
				from(); 
			}
			number++; 
		}
		
		return 0;
	}

int Del_employee()
	{
		system ("cls");
		printf("====================================\n");
		printf("1.按员工姓名删除\n");
		printf("2.按员工编号删除\n");
		printf("3.按员工工资删除\n");
		printf("4.返回\n");
		printf("====================================\n");
		printf("请输入序号:");
		int InputNumber=0;
		scanf("%d",&InputNumber);
		getchar();
		switch (InputNumber)
		{
			case 1:
				Del_Name_employee();
				break;
			case 2:
				Del_Num_employee();
				break;	
			case 3:
				Del_Salary_employee();
				break;	
			case 4: 
				from();
			default   :
				Del_employee();
		}
		return 0;
	}

	int Del_Find_employee(char *name)
		{
				for (int i = 0; i < number; i++)
				{	
					if(strcmp(emp[i].name,name)==0)/*相等返回0*/
					{
					 	return i;
					}
					if (i == number-1)
					{
						return 0;
					}
				}
		}

	int Del_Name_employee()
		{
			int i=0;
			char Name[20];
			printf("请输入员工姓名:");
			scanf("%s",&Name);
			getchar();
			i=Del_Find_employee(Name);
			for (int j = i; j < number; j++) 
			{
				emp[j]=emp[j+1];
				emp[j].num=j;
			}
			number--;
			from();
		}

	int Del_Num_employee()
		{
			int i=0;
			printf("请输入编号:");
			scanf("%d",&i);
			getchar();
			for (int j = i; j < number; j++) 
			{
				emp[j]=emp[j+1];
				emp[j].num=j;
			}
			number--;
			from();
		}

	int Del_Salary_employee()
		{
			int i=0;
			int salary=0;
			printf("请输入工资:");
			scanf("%f",&salary);
			getchar();
				for (int i = 0; i < number; i++)
				{
					if (emp[i].salary - salary == 0)
					{
						for (int j = i; j < number; j++) 
						{
							emp[j]=emp[j+1];
							emp[j].num=j;
						}
						number--;
					}
				}
			from();
		}
	
int search_employee()
{
	system ("cls");
	char name[20];
    printf("请输入要查找的员工姓名:");
    scanf("%s",&name);
    getchar();
	for (int i = 0; i < number; i++)
	{	
		if(strcmp(emp[i].name,name)==0)/*相等返回0*/
		{
		  printf("====================================\n");
		  printf("Name\tNum\tSalary\n");
		  printf("%s\t%d\t%.2f\n",emp[i].name,emp[i].num,emp[i].salary);
		  printf("====================================\n");
		  break;
		}
		if (i == 9)
		{
			printf("Not Found!!!\n");
		}
	}
	getchar();
	from();
	return 0;
}

int Look_employee()
{
	char temp;
	printf("====================================\n");
	printf("Name\t\tNum\t\tSalary\n\n");
	for (int i = 0; i < number; i++)
	{
		printf("%s\t\t%d\t\t%.2f\n",emp[i].name,emp[i].num,emp[i].salary);
	}
	printf("====================================\n");
	getchar();
	scanf("%c",&temp);
	from();
	return 0;
}
