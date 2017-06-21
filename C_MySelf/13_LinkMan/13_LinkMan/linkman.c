#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
int Form();
void ShowWelcome();
void ClearSceen();	/*清屏*/
int GetSelect();	/*获取用户的选择序号*/
void ShowMenu();	/*菜单*/
void Add();			/*添加联系人*/
	void InputData(struct LINKER *pLinker); /*对联系人的数据进行录入*/
	int CheckInput(char *Buffer);			/*检查Linker.Name是否为空,只重复3次*/
	void SaveToFile(struct LINKER *pLinker);/*把用户的信息保存到文件*/
void Del();/*删除联系人*/
int CloseFile(FILE *fp1,FILE *fp2);
int GetFileDataCount(); /*得到联系人的总个数*/
void Search();			/*查找联系人*/
void View();			/*查看联系人*/
struct LINKER
{
	char Name[50];
	char Tel[80];
	char HomeTel[80];
	char Address[128];	
}Linker;

char Menu[5][50]=
{
	"1.添加联系人\0",
	"2.删除联系人\0",
	"3.查找联系人\0",
	"4.查看联系人\0",
	"5.退出系统\0"
};

char Add_Input[4][50]=
{
	"请输入姓名:\0",
	"请输入联系方式:\0",
	"请输入座机号码:\0",
	"请输入地址:\0"
};
char Add_Check[]={"电话号码不能为空!\0"};

char Del_Print[]={"请输入编号:\0"};

char SearchBuf[4][50]=
{
	"姓名:\0",
	"联系方式:\0",
	"座机号码:\0",
	"地址:\0"
};
char Search_Check[]={"请输入要查找的内容!\0"};

char ListTitle[5][50]=
{
	"编号:\0",
	"姓名:\0",
	"联系方式:\0",
	"座机号码:\0",
	"地址:\0"
};

int main()
{
	system ("Title 通讯录1.0");
	system ("Color a");
	ShowWelcome();
    Form();
    return 0;
}

int Form()
{
	getch();
	while(1)
	{
	  ClearSceen();
	  ShowMenu();
	  switch (GetSelect())		
	  {
	  	case 49:
	  		ClearSceen();
	  		Add();
	  		break;
	  	case 50:
	  		ClearSceen();
	  		Del();
	  		break;
	  	case 51:
	  		ClearSceen();
	  		Search();
	  		break;
	  	case 52: 
	  		ClearSceen();
	  		View();
	  		break;
	  	case 53: 
	  		exit(1);
	  }
	}
	return 0;
}

void ShowWelcome()
{
	printf("\n");
	printf("┏━━━━━━━━━━━━━━━━━┓\n");
	printf("┃  ┏━━━━━━━━━━━━━┓  ┃\n");
	printf("┣━┫\t欢迎使用通讯录管理系统!\t┣━┫\n");
	printf("┃  ┗━━━━━━━━━━━━━┛  ┃\n");
	printf("┗━━━━━━━━━━━━━━━━━┛\n");
}

void ClearSceen()
{
	system ("cls");
}

int GetSelect()
{
	int SelectLenth=0;
	char Select[5]="\0";
	gets(Select);
	SelectLenth=strlen(Select);
	if (SelectLenth>1  || Select[0]<49 || Select[0]>=54)
	{
		printf("┃\n");
		printf("┣━━━━━━━━━━┫\n");
		printf("┣ 请输入正确的序号!  ┫\n");
		printf("┗━━━━━━━━━━┛\n");
		getch();
		return 0;
	}
	else  return Select[0];
}

void ShowMenu()
{
	printf("┏━━━━━━━━━━━━━━━━━━━┓\n");
	for (int i = 0; i < 5; i++)
	{
		printf("┃%s\t\t", Menu[i++]);
		if(i == 5) printf("%s\t\t┃\n", Menu[i]);
		else printf("%s\t┃\n", Menu[i]);
	}
	printf("┣━━━━━━━━━━━━━━━━━━━┛\n");
	printf("┗请输入序号:");
}

void Add()
{	char LoopCondition=' ';
	while(1)
	{
		memset(&Linker,0,sizeof(Linker));/*对linker这个结构体快速清零*/
		InputData(&Linker);
		SaveToFile(&Linker);
	  	printf("\n是否继续添加联系人?(*/n):");
	  	scanf("%c",&LoopCondition);
	  	printf("\n");
	  	if (LoopCondition == 'n' || LoopCondition == 'N') break;
	}
}

	void InputData(struct LINKER *pLinker)
	{
		int InputCount=3;
		printf("%s", Add_Input[0]);
		scanf("%s",pLinker -> Name);
		if (!CheckInput(pLinker -> Name))
		{
			strcpy(pLinker -> Name,"Null");
		}
		printf("%s", Add_Input[1]);
		scanf("%s",pLinker -> Tel);
		while(!CheckInput(pLinker -> Tel))
		{
		  printf("%s\n", Add_Check);
		  InputCount--;
		  if (InputCount < 0)  
		  {
		  	printf("联系方式:Null\n");
		  	break;
		  }
		}
		printf("%s", Add_Input[2]);
		scanf("%s",pLinker -> HomeTel);
		printf("%s", Add_Input[3]);
		scanf("%s",pLinker -> Address);
	}

	int CheckInput(char *Buffer)
	{
		if (Buffer[0] == '\0')		return 0;
		if (strlen(Buffer) <= 0)	return 0;

		return 1;
	}

	void SaveToFile(struct LINKER *pLinker)
	{
		FILE *file;
		file=fopen("linkman.dat","a");
		fwrite(pLinker,1,sizeof(struct LINKER),file);
		fclose(file);
		printf("已成功保存!\n");
		getch();
	}

void Del()
{
	int a;
	FILE *file=NULL;
	FILE *FileTemp=NULL;
	int index=0;
	int TotalCount=0;
	long Pos=0;
	int i=0,j=0;
	
	char BufferArry[500];
	BufferArry[0]='\0';
	printf("%s", Del_Print);
	scanf("%d",&index);
	TotalCount=GetFileDataCount();
	if (index <= 0 || index > TotalCount)	
	{
		printf("数据不存在!\n");
		getch();
		ClearSceen();
		Form();
	}
	file=fopen("linkman.dat","r+");
	FileTemp=fopen("linkmanTemp.tdat","a+");
	for ( i = 0; i < TotalCount; i++)
	{
		if (i == (index-1)) continue;
		memset(&Linker,0,sizeof(struct LINKER));
		Pos=sizeof(struct LINKER) * i;
		fseek(file,Pos,SEEK_SET);
		fread(&Linker,sizeof(struct LINKER),1,file);
		fwrite(&Linker,sizeof(struct LINKER),1,FileTemp);	
	}
	fclose(file);
	fclose(FileTemp);
	file=NULL;
	FileTemp=NULL;
	a=remove("linkman.dat");
	if (a==0)	printf("\n成功删除!\n");
	else 		printf("\n未能成功删除!其原因是: ");
	if(a)		perror("remove");
	rename("linkmanTemp.tdat","linkman.dat");
	getch();
}

int GetFileDataCount()
{
	FILE *file;
	int FileLenth=0;
	file=fopen("linkman.dat","r");
	if (file != NULL)	
	{
		fseek(file,0,SEEK_END);
		FileLenth=ftell(file);
		fclose(file);
		file=NULL;
		return FileLenth / sizeof(struct LINKER);
	}
	else return 0;
}

void Search()
{
	int FoundCount=0;
	char InputKeys[20]={"\0"};
	FILE *file;
	int TotalCount=0;
	TotalCount=GetFileDataCount();
	printf("请输入要查找的内容:");
	gets(InputKeys);
	printf("┏━━━┳━━━━━━━┳━━━━━━━┳━━━━━━━┳━━━━━━━━┓\n");
	printf("┃编号\t┃姓名\t\t┃电话\t\t┃家庭电话\t┃地址\t\t  ┃\n");
	printf("┣━━━┻━━━━━━━┻━━━━━━━┻━━━━━━━┻━━━━━━━━┫\n");
	file=fopen("linkman.dat","r");
	for (int i = 0; i < TotalCount; i++)
	{
			fseek(file,sizeof(struct LINKER)*i,SEEK_SET);
			fread(&Linker,sizeof(struct LINKER),1,file);
			if (strcmp(Linker.Name,InputKeys) == 0)
			{
				FoundCount++;
				printf("┃%d\t %s\t\t %s\t\t %s\t\t %s\t\t  \n",i+1,Linker.Name,Linker.Tel,Linker.HomeTel,Linker.Address);
				printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
			} 
			if (strcmp(Linker.Tel,InputKeys) == 0)
			{
				printf("┃%d\t %s\t\t %s\t\t\t\t\t\t  \n",i+1,Linker.Name,Linker.Tel);
				printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
				FoundCount++;
			} 
			if (strcmp(Linker.HomeTel,InputKeys) == 0)
			{
				printf("┃%d\t %s\t\t\t\t %s\t\t\t\t  \n",i+1,Linker.Name,Linker.HomeTel);
				printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
				FoundCount++;
			} 
			if (strcmp(Linker.Address,InputKeys) == 0)
			{
				printf("┃%d\t %s\t\t\t\t\t\t %s\t\t  \n",i+1,Linker.Name,Linker.Address);
				printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
				FoundCount++;
			} 
	}
	fclose(file);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
	printf("\n");
	if (FoundCount == 0)	
	{
		printf("没有找到 \" %s \" 的信息!\n",InputKeys);
	}
	getch();
}

void View()
{
	FILE *file;
	int i=0;
	int TotalCount=0;
	long Pos;
	ClearSceen();
	TotalCount=GetFileDataCount();
	file=fopen("linkman.dat","r");
	for (int i = 0; i < TotalCount; i++)
	{
		if (file != NULL)
		{
			fseek(file,sizeof(struct LINKER)*i,SEEK_SET);
			fread(&Linker,sizeof(struct LINKER),1,file);
			printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf("┠%s%d\n", ListTitle[0],i+1);
			printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
			printf("┠%s", ListTitle[1]);
			printf("%s\n",Linker.Name );
			printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
			printf("┠%s", ListTitle[2]);
			printf("%s\n",Linker.Tel );
			printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
			printf("┠%s", ListTitle[3]);
			printf("%s\n",Linker.HomeTel );
			printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n");
			printf("┠%s", ListTitle[4]);
			printf("%s\n",Linker.Address );
			printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n\n\n");
		}
	}
	fclose(file);
	getch();
}
