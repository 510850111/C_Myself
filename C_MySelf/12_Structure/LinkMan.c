/*联系人管理系统*/
#include <windows.h>
#include <stdio.h>
#include <string.h>
#define MaxNumber 500 	/*最大联系人数量*/
int CurrentNumber = 0;	/*当前联系人数量*/
struct LinkMan
	{
		char Name[20];
		char PhoneNumber[20];
		char HomeNumber[20];
		char Address[100];
	};
struct LinkMan Man[MaxNumber];
int Form();						/*界面*/
void Add_LinkMan();				/*添加联系人*/
void Del_LinkMan();				/*删除联系人*/
	void Del_Name_LinkMan();	/*按姓名删除*/
	void Del_PhoneNumber_LinkMan();/*按手机号删除*/
	void Del_HomeNumber_LinkMan(); /*按座机号删除*/
	void Del_Adress_LinkMan();	   /*按地址删除*/
void Search_LinkMan();		    /*查找联系人*/
	int Search_Name_LinkMan(char *search);		 /*按姓名查找*/
	int Search_PhoneNumber_LinkMan(char *search);/*按手机号查找*/
	int Search_HomeNumber_LinkMan(char *search); /*按座机号查找*/
	int Search_Adress_LinkMan(char *search);	 /*按地址查找*/
	void Search_Dim_LinkMan();		  			 /*模糊查找*/
void View_LinkMan();			/*查看联系人*/

int main()
	{
		system ("Title 通讯录1.0");
		system ("color a");
	    Form();
	    return 0;
	}
int Form()
	{
		int InputNumber=0;
		system ("cls");
		printf("======================================\n");
		printf("1.增添联系人\t\t 2.删除联系人\n");
		printf("3.查找联系人\t\t 4.查看联系人\n");
		printf("5.退出系统\t\n");
		printf("======================================\n");
		printf("请输入序号:");
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
			printf("请输入第%d个联系人的姓名:",i+1);
			gets(Man[i].Name);
			printf("请输入%s的手机号:",Man[i].Name);
			gets(Man[i].PhoneNumber);
			printf("请输入%s的座机号:",Man[i].Name);
			gets(Man[i].HomeNumber);
			printf("请输入%s的家庭住址:",Man[i].Name);
			gets(Man[i].Address);
			CurrentNumber++;				/*当前联系人+1*/
			printf("是否继续添加联系人? (* / n) ");
			scanf("%c",&Yes_Or_No);
			if(Yes_Or_No == 'n' || Yes_Or_No == 'N') Form();

		}
	} 
void Del_LinkMan()/*删除联系人*/
	{
		int InputNumber=0;
		system ("cls");
		printf("======================================\n");
		printf("1.按姓名删除\t\t 2.按手机号删除\n");
		printf("3.按座机号删除\t\t 4.按地址删除\n");
		printf("5.返回\t\n");
		printf("======================================\n");
		printf("请输入数字:");
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
	void Del_Name_LinkMan()	/*按姓名删除*/
	{
		int count=0;
		char InputName[20];
		system ("cls");
		getchar();
		printf("请输入姓名:");
		gets(InputName);
		printf("姓名\t\t手机号\t\t座机号\t\t家庭住址\n");
		for (int i = 0; i < CurrentNumber; i++)
		{
			if (strcmp(Man[i].Name,InputName) == 0)
			{
				printf("%s\t\t%s\t\t%s\t\t%s\t\t[现已被删除]\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);

				for (int j = i; j < CurrentNumber; j++) 
				{
					Man[j]=Man[j+1];
				}
				i--;
				CurrentNumber--;
				count++;
			}
		}
		if (count == 0) printf("没有找到\"%s\"这个联系人!\n",InputName );
		getchar();	
		Form();
	}
	void Del_PhoneNumber_LinkMan()/*按手机号删除*/
	{
		int count=0;
		char InputPhoneNumber[20];
		system ("cls");
		getchar();
		printf("请输入电话号码:");
		gets(InputPhoneNumber);
		printf("姓名\t\t手机号\t\t座机号\t\t家庭住址\n");
		for (int i = 0; i < CurrentNumber; i++)
		{
			if (strcmp(Man[i].PhoneNumber,InputPhoneNumber) == 0)
			{
				printf("%s\t\t%s\t\t%s\t\t%s\t\t[现已被删除]\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);

				for (int j = i; j < CurrentNumber; j++) 
				{
					Man[j]=Man[j+1];
				}
				i--;
				CurrentNumber--;
				count++;
			}
		}
		if (count == 0) printf("没有找到电话号码是\"%s\"的联系人!\n",InputPhoneNumber );
		getchar();	
		Form();
	}
	void Del_HomeNumber_LinkMan() /*按座机号删除*/
	{
		int count=0;
		char InputHomeNumber[20];
		system ("cls");
		getchar();
		printf("请输入座机号码:");
		gets(InputHomeNumber);
		printf("姓名\t\t手机号\t\t座机号\t\t家庭住址\n");
		for (int i = 0; i < CurrentNumber; i++)
		{
			if (strcmp(Man[i].HomeNumber,InputHomeNumber) == 0)
			{
				printf("%s\t\t%s\t\t%s\t\t%s\t\t[现已被删除]\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);

				for (int j = i; j < CurrentNumber; j++) 
				{
					Man[j]=Man[j+1];
				}
				i--;
				CurrentNumber--;
				count++;
			}
		}
		if (count == 0) printf("没有找到座机号码是\"%s\"的联系人!\n",InputHomeNumber );
		getchar();	
		Form();
	}
	void Del_Adress_LinkMan()	   /*按地址删除*/
	{
		int count=0;
		char InputAdress[20];
		system ("cls");
		getchar();
		printf("请输入地址:");
		gets(InputAdress);
		printf("姓名\t\t手机号\t\t座机号\t\t家庭住址\n");
		for (int i = 0; i < CurrentNumber; i++)
		{
			if (strcmp(Man[i].Address,InputAdress) == 0)
			{
				printf("%s\t\t%s\t\t%s\t\t%s\t\t[现已被删除]\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);

				for (int j = i; j < CurrentNumber; j++) 
				{
					Man[j]=Man[j+1];
				}
				i--;
				CurrentNumber--;
				count++;
			}
		}
		if (count == 0) printf("没有找到地址是\"%s\"的联系人!\n",InputAdress );
		getchar();	
		Form();
	}
void Search_LinkMan()/*查找联系人*/
	{
		int InputNumber=0;
		system ("cls");
		printf("======================================\n");
		printf("1.按姓名查找\t\t 2.按手机号查找\n");
		printf("3.按座机号查找\t\t 4.按地址查找\n");
		printf("5.模糊查找\t\t 6.返回\n");
		printf("======================================\n");
		printf("请输入序号:");
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
	int Search_Name_LinkMan(char *search)	/*按姓名查找*/
		{
			int count=0;
			char InputName[20];
			gets(InputName);
			if (search == NULL)
			{	
				search = InputName;
			 	printf("姓名\t\t手机号\t\t座机号\t\t家庭住址\n");
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
				printf("没有找到名字为%s的人\n",search);
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
	int Search_PhoneNumber_LinkMan(char *search)/*按手机号查找*/
		{
			int count=0;
			char InputPhoneNumber[20];
			gets(InputPhoneNumber);
			if (search == NULL)
			{	
				search = InputPhoneNumber;
			 	printf("姓名\t\t手机号\t\t座机号\t\t家庭住址\n");
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
				printf("没有找到电话为%s的人!\n",InputPhoneNumber);
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
	int Search_HomeNumber_LinkMan(char *search) /*按座机号查找*/
		{
			int count=0;
			char InputHomeNumber[20];
			gets(InputHomeNumber);
			if (search == NULL)
			{	
				search = InputHomeNumber;
			 	printf("姓名\t\t手机号\t\t座机号\t\t家庭住址\n");
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
				printf("没有找到座机为%s的人!\n",InputHomeNumber);
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
	int Search_Adress_LinkMan(char *search)	  /*按地址查找*/
		{
			int count=0;
			char InputAddress[100];
			gets(InputAddress);
			if (search == NULL)
			{	
				search = InputAddress;
			 	printf("姓名\t\t手机号\t\t座机号\t\t家庭住址\n");
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
				printf("没有找到电话为%s的人!\n",InputAddress);
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
	void Search_Dim_LinkMan()		  /*模糊查找*/
		{
			char Input[100]="";
			printf("请输入要查找的内容:");
			gets(Input);
			printf("姓名\t\t手机号\t\t座机号\t\t家庭住址\n");
			Search_Name_LinkMan(Input);
			Search_PhoneNumber_LinkMan(Input);
			Search_HomeNumber_LinkMan(Input);
			Search_Adress_LinkMan(Input);
			getchar();
			Form();
		}
void View_LinkMan()/*查看联系人*/
	{	
		char Temp;
		system ("cls");
		printf("===================================================================\n");
		printf("姓名\t\t手机号\t\t座机号\t\t家庭住址\n");
		for (int i = 0; i < CurrentNumber; i++)
		{
			printf("%s\t\t%s\t\t%s\t\t%s\n",Man[i].Name,Man[i].PhoneNumber,Man[i].HomeNumber,Man[i].Address);
		}
		printf("====================================================================\n");
		scanf("%c",&Temp);	
		getchar();
		Form();
	}
