/*��ϵ�˹���ϵͳ*/
#include <windows.h>
#include <stdio.h>
#include <string.h>
#define MaxNumber 500 	/*�����ϵ������*/
int CurrentNumber = 0;	/*��ǰ��ϵ������*/
struct LinkMan
	{
		char Name[20];
		char PhoneNumber[20];
		char HomeNumber[20];
		char Address[100];
	};
struct LinkMan Man[MaxNumber];
int Form();						/*����*/
void Add_LinkMan();				/*�����ϵ��*/
void Del_LinkMan();				/*ɾ����ϵ��*/
	void Del_Name_LinkMan();	/*������ɾ��*/
	void Del_PhoneNumber_LinkMan();/*���ֻ���ɾ��*/
	void Del_HomeNumber_LinkMan(); /*��������ɾ��*/
	void Del_Adress_LinkMan();	   /*����ַɾ��*/
void Search_LinkMan();		    /*������ϵ��*/
	int Search_Name_LinkMan(char *search);		 /*����������*/
	int Search_PhoneNumber_LinkMan(char *search);/*���ֻ��Ų���*/
	int Search_HomeNumber_LinkMan(char *search); /*�������Ų���*/
	int Search_Adress_LinkMan(char *search);	 /*����ַ����*/
	void Search_Dim_LinkMan();		  			 /*ģ������*/
void View_LinkMan();			/*�鿴��ϵ��*/

int main()
	{
		system ("Title ͨѶ¼1.0");
		system ("color a");
	    Form();
	    return 0;
	}
int Form()
	{
		int InputNumber=0;
		system ("cls");
		printf("======================================\n");
		printf("1.������ϵ��\t\t 2.ɾ����ϵ��\n");
		printf("3.������ϵ��\t\t 4.�鿴��ϵ��\n");
		printf("5.�˳�ϵͳ\t\n");
		printf("======================================\n");
		printf("���������:");
		scanf("%d",&InputNumber);
		switch (InputNumber)
		{
			case 1:
				Add_LinkMan();
				break;
			case 2:
				Del_LinkMan();
				break;	
			case 3:
				Search_LinkMan();
				break;	
			case 4: 
				View_LinkMan();
				break;
			case 5: 
				return 0;
			default   :
				Form();
		}
	return 0;
	}
void Add_LinkMan()
	{	
		getchar();
		for (int i = CurrentNumber; i < MaxNumber; i++)
		{
			char Yes_Or_No='y';
			system ("cls");
			printf("======================================\n");
			printf("�������%d����ϵ�˵�����:",i+1);
			gets(Man[i].Name);
			printf("������%s���ֻ���:",Man[i].Name);
			gets(Man[i].PhoneNumber);
			printf("������%s��������:",Man[i].Name);
			gets(Man[i].HomeNumber);
			printf("������%s�ļ�ͥסַ:",Man[i].Name);
			gets(Man[i].Address);
			CurrentNumber++;				/*��ǰ��ϵ��+1*/
			printf("�Ƿ���������ϵ��? (* / n) ");
			scanf("%c",&Yes_Or_No);
			if(Yes_Or_No == 'n' || Yes_Or_No == 'N') Form();

		}
	} 
void Del_LinkMan()/*ɾ����ϵ��*/
	{
		int InputNumber=0;
		system ("cls");
		printf("======================================\n");
		printf("1.������ɾ��\t\t 2.���ֻ���ɾ��\n");
		printf("3.��������ɾ��\t\t 4.����ַɾ��\n");
		printf("5.����\t\n");
		printf("======================================\n");
		printf("����������:");
		scanf("%d",&InputNumber);
		switch (InputNumber)
		{
			case 1:
				Del_Name_LinkMan();	
				break;
			case 2:
				Del_PhoneNumber_LinkMan();
				break;	
			case 3:
				Del_HomeNumber_LinkMan();
				break;	
			case 4: 
				Del_Adress_LinkMan();
				break;
			case 5: 
				Form();
			default   :
				Del_LinkMan();
		}
	}
	void Del_Name_LinkMan()	/*������ɾ��*/
	{
		int count=0;
		char InputName[20];
		system ("cls");
		getchar();
		printf("����������:");
		gets(InputName);
		printf("����\t\t�ֻ���\t\t������\t\t��ͥסַ\n");
		for (int i = 0; i < CurrentNumber; i++)
		{
			if (strcmp(Man[i].Name,InputName) == 0)
			{
				printf("%s\t\t%s\t\t%s\t\t%s\t\t[���ѱ�ɾ��]\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);

				for (int j = i; j < CurrentNumber; j++) 
				{
					Man[j]=Man[j+1];
				}
				i--;
				CurrentNumber--;
				count++;
			}
		}
		if (count == 0) printf("û���ҵ�\"%s\"�����ϵ��!\n",InputName );
		getchar();	
		Form();
	}
	void Del_PhoneNumber_LinkMan()/*���ֻ���ɾ��*/
	{
		int count=0;
		char InputPhoneNumber[20];
		system ("cls");
		getchar();
		printf("������绰����:");
		gets(InputPhoneNumber);
		printf("����\t\t�ֻ���\t\t������\t\t��ͥסַ\n");
		for (int i = 0; i < CurrentNumber; i++)
		{
			if (strcmp(Man[i].PhoneNumber,InputPhoneNumber) == 0)
			{
				printf("%s\t\t%s\t\t%s\t\t%s\t\t[���ѱ�ɾ��]\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);

				for (int j = i; j < CurrentNumber; j++) 
				{
					Man[j]=Man[j+1];
				}
				i--;
				CurrentNumber--;
				count++;
			}
		}
		if (count == 0) printf("û���ҵ��绰������\"%s\"����ϵ��!\n",InputPhoneNumber );
		getchar();	
		Form();
	}
	void Del_HomeNumber_LinkMan() /*��������ɾ��*/
	{
		int count=0;
		char InputHomeNumber[20];
		system ("cls");
		getchar();
		printf("��������������:");
		gets(InputHomeNumber);
		printf("����\t\t�ֻ���\t\t������\t\t��ͥסַ\n");
		for (int i = 0; i < CurrentNumber; i++)
		{
			if (strcmp(Man[i].HomeNumber,InputHomeNumber) == 0)
			{
				printf("%s\t\t%s\t\t%s\t\t%s\t\t[���ѱ�ɾ��]\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);

				for (int j = i; j < CurrentNumber; j++) 
				{
					Man[j]=Man[j+1];
				}
				i--;
				CurrentNumber--;
				count++;
			}
		}
		if (count == 0) printf("û���ҵ�����������\"%s\"����ϵ��!\n",InputHomeNumber );
		getchar();	
		Form();
	}
	void Del_Adress_LinkMan()	   /*����ַɾ��*/
	{
		int count=0;
		char InputAdress[20];
		system ("cls");
		getchar();
		printf("�������ַ:");
		gets(InputAdress);
		printf("����\t\t�ֻ���\t\t������\t\t��ͥסַ\n");
		for (int i = 0; i < CurrentNumber; i++)
		{
			if (strcmp(Man[i].Address,InputAdress) == 0)
			{
				printf("%s\t\t%s\t\t%s\t\t%s\t\t[���ѱ�ɾ��]\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);

				for (int j = i; j < CurrentNumber; j++) 
				{
					Man[j]=Man[j+1];
				}
				i--;
				CurrentNumber--;
				count++;
			}
		}
		if (count == 0) printf("û���ҵ���ַ��\"%s\"����ϵ��!\n",InputAdress );
		getchar();	
		Form();
	}
void Search_LinkMan()/*������ϵ��*/
	{
		int InputNumber=0;
		system ("cls");
		printf("======================================\n");
		printf("1.����������\t\t 2.���ֻ��Ų���\n");
		printf("3.�������Ų���\t\t 4.����ַ����\n");
		printf("5.ģ������\t\t 6.����\n");
		printf("======================================\n");
		printf("���������:");
		scanf("%d",&InputNumber);
		switch (InputNumber)
		{
			case 1:
				Search_Name_LinkMan(NULL);
				break;
			case 2:
				Search_PhoneNumber_LinkMan(NULL);
				break;	
			case 3:
				Search_HomeNumber_LinkMan(NULL);
				break;	
			case 4: 
				Search_Adress_LinkMan(NULL);
				break;
			case 5: 
				Search_Dim_LinkMan();
			case 6: 
				Form();
			default   :
				Search_LinkMan();
		}
	}
	int Search_Name_LinkMan(char *search)	/*����������*/
		{
			int count=0;
			char InputName[20];
			gets(InputName);
			if (search == NULL)
			{	
				search = InputName;
			 	printf("����\t\t�ֻ���\t\t������\t\t��ͥסַ\n");
			}
			for (int i = 0; i < CurrentNumber; i++)
			{
				if (strcmp(Man[i].Name,search) == 0)	
				{
					printf("%s\t\t%s\t\t%s\t\t%s\t\t\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);
					count++;
				}
			}
			if(count == 0 && search == NULL)
			{
				printf("û���ҵ�����Ϊ%s����\n",search);
			}
			if (search == NULL)
			{
				getchar();
				Form();
			}
			else
			{
				return 0;
			}
			
			
		}
	int Search_PhoneNumber_LinkMan(char *search)/*���ֻ��Ų���*/
		{
			int count=0;
			char InputPhoneNumber[20];
			gets(InputPhoneNumber);
			if (search == NULL)
			{	
				search = InputPhoneNumber;
			 	printf("����\t\t�ֻ���\t\t������\t\t��ͥסַ\n");
			}
			for (int i = 0; i < CurrentNumber; i++)
			{
				if (strcmp(Man[i].PhoneNumber,InputPhoneNumber) == 0)	
				{
					printf("%s\t\t%s\t\t%s\t\t%s\t\t\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);
					count++;
				}
			}
			if(count == 0 && search == NULL)
			{
				printf("û���ҵ��绰Ϊ%s����!\n",InputPhoneNumber);
			}
			if (search == NULL)
			{
				getchar();
				Form();
			}
			else
			{
				return 0;
			}
		}
	int Search_HomeNumber_LinkMan(char *search) /*�������Ų���*/
		{
			int count=0;
			char InputHomeNumber[20];
			gets(InputHomeNumber);
			if (search == NULL)
			{	
				search = InputHomeNumber;
			 	printf("����\t\t�ֻ���\t\t������\t\t��ͥסַ\n");
			}
			for (int i = 0; i < CurrentNumber; i++)
			{
				if (strcmp(Man[i].HomeNumber,InputHomeNumber) == 0)	
				{
					printf("%s\t\t%s\t\t%s\t\t%s\t\t\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);
					count++;
				}
			}
			if(count == 0 && search == NULL)
			{
				printf("û���ҵ�����Ϊ%s����!\n",InputHomeNumber);
			}
			if (search == NULL)
			{
				getchar();
				Form();
			}
			else
			{
				return 0;
			}
		}
	int Search_Adress_LinkMan(char *search)	  /*����ַ����*/
		{
			int count=0;
			char InputAddress[100];
			gets(InputAddress);
			if (search == NULL)
			{	
				search = InputAddress;
			 	printf("����\t\t�ֻ���\t\t������\t\t��ͥסַ\n");
			}
			for (int i = 0; i < CurrentNumber; i++)
			{
				if (strcmp(Man[i].Address,InputAddress) == 0)	
				{
					printf("%s\t\t%s\t\t%s\t\t%s\t\t\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);
					count++;
				}
			}
			if(count == 0 &&search == NULL)
			{
				printf("û���ҵ��绰Ϊ%s����!\n",InputAddress);
			}
			if (search == NULL)
			{
				getchar();
				Form();
			}
			else
			{
				return 0;
			}
		}
	void Search_Dim_LinkMan()		  /*ģ������*/
		{
			char Input[100]="";
			printf("������Ҫ���ҵ�����:");
			gets(Input);
			printf("����\t\t�ֻ���\t\t������\t\t��ͥסַ\n");
			Search_Name_LinkMan(Input);
			Search_PhoneNumber_LinkMan(Input);
			Search_HomeNumber_LinkMan(Input);
			Search_Adress_LinkMan(Input);
			getchar();
			Form();
		}
void View_LinkMan()/*�鿴��ϵ��*/
	{	
		char Temp;
		system ("cls");
		printf("===================================================================\n");
		printf("����\t\t�ֻ���\t\t������\t\t��ͥסַ\n");
		for (int i = 0; i < CurrentNumber; i++)
		{
			printf("%s\t\t%s\t\t%s\t\t%s\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);
		}
		printf("====================================================================\n");
		scanf("%c",&Temp);	
		getchar();
		Form();
	}
