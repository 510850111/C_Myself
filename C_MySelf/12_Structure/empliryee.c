/*Ա������ϵͳ*/
#include <windows.h>
#include <stdio.h>
#include <string.h>
#define N 100 /*�����100��Ա��*/
int number=0;/*��ǰԱ������*/
struct employee
{
	int num;
	char name[20];
	float salary;
};
struct employee emp[N];
int Add_employee();			/*���Ա��*/
int Del_employee();			/*ɾ��Ա��*/
	int Del_Name_employee();/*������ɾ��*/
	int Del_Num_employee();	/*�����ɾ��*/
	int Del_Salary_employee();/*������ɾ��*/
	int Del_Find_employee(char *name);	/*����Ҫɾ����Ա��*/
int search_employee();			/*����Ա��*/
int Look_employee();			/*�鿴ȫ��Ա��*/
int from();/*����*/
int main()
{
	system ("Title Ա������ϵͳ");
	from();
    return 0;
}

int from()
	{
		int InputNumber=0;
		system ("cls");
		printf("====================================\n");
		printf("1.����Ա��\t\t 2.ɾ��Ա��\n");
		printf("3.����Ա��\t\t 4.�鿴Ա��\n");
		printf("5.�˳�ϵͳ\t\n");
		printf("====================================\n");
		printf("����������:");
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
			printf("�������븺��ʱ��������\n\n");
			emp[i].num=i;
			printf("Ա�����:%d\n", emp[i].num);
			printf("������Ա������:");
			scanf("%s",&emp[i].name);
			printf("������Ա������:");
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
		printf("1.��Ա������ɾ��\n");
		printf("2.��Ա�����ɾ��\n");
		printf("3.��Ա������ɾ��\n");
		printf("4.����\n");
		printf("====================================\n");
		printf("���������:");
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
					if(strcmp(emp[i].name,name)==0)/*��ȷ���0*/
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
			printf("������Ա������:");
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
			printf("��������:");
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
			printf("�����빤��:");
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
    printf("������Ҫ���ҵ�Ա������:");
    scanf("%s",&name);
    getchar();
	for (int i = 0; i < number; i++)
	{	
		if(strcmp(emp[i].name,name)==0)/*��ȷ���0*/
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
