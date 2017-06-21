#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
int Form();
void ShowWelcome();
void ClearSceen();	/*����*/
int GetSelect();	/*��ȡ�û���ѡ�����*/
void ShowMenu();	/*�˵�*/
void Add();			/*�����ϵ��*/
	void InputData(struct LINKER *pLinker); /*����ϵ�˵����ݽ���¼��*/
	int CheckInput(char *Buffer);			/*���Linker.Name�Ƿ�Ϊ��,ֻ�ظ�3��*/
	void SaveToFile(struct LINKER *pLinker);/*���û�����Ϣ���浽�ļ�*/
void Del();/*ɾ����ϵ��*/
int CloseFile(FILE *fp1,FILE *fp2);
int GetFileDataCount(); /*�õ���ϵ�˵��ܸ���*/
void Search();			/*������ϵ��*/
void View();			/*�鿴��ϵ��*/
struct LINKER
{
	char Name[50];
	char Tel[80];
	char HomeTel[80];
	char Address[128];	
}Linker;

char Menu[5][50]=
{
	"1.�����ϵ��\0",
	"2.ɾ����ϵ��\0",
	"3.������ϵ��\0",
	"4.�鿴��ϵ��\0",
	"5.�˳�ϵͳ\0"
};

char Add_Input[4][50]=
{
	"����������:\0",
	"��������ϵ��ʽ:\0",
	"��������������:\0",
	"�������ַ:\0"
};
char Add_Check[]={"�绰���벻��Ϊ��!\0"};

char Del_Print[]={"��������:\0"};

char SearchBuf[4][50]=
{
	"����:\0",
	"��ϵ��ʽ:\0",
	"��������:\0",
	"��ַ:\0"
};
char Search_Check[]={"������Ҫ���ҵ�����!\0"};

char ListTitle[5][50]=
{
	"���:\0",
	"����:\0",
	"��ϵ��ʽ:\0",
	"��������:\0",
	"��ַ:\0"
};

int main()
{
	system ("Title ͨѶ¼1.0");
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
	printf("��������������������������������������\n");
	printf("��  ������������������������������  ��\n");
	printf("�ǩ���\t��ӭʹ��ͨѶ¼����ϵͳ!\t�ǩ���\n");
	printf("��  ������������������������������  ��\n");
	printf("��������������������������������������\n");
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
		printf("��\n");
		printf("�ǩ���������������������\n");
		printf("�� ��������ȷ�����!  ��\n");
		printf("������������������������\n");
		getch();
		return 0;
	}
	else  return Select[0];
}

void ShowMenu()
{
	printf("������������������������������������������\n");
	for (int i = 0; i < 5; i++)
	{
		printf("��%s\t\t", Menu[i++]);
		if(i == 5) printf("%s\t\t��\n", Menu[i]);
		else printf("%s\t��\n", Menu[i]);
	}
	printf("�ǩ���������������������������������������\n");
	printf("�����������:");
}

void Add()
{	char LoopCondition=' ';
	while(1)
	{
		memset(&Linker,0,sizeof(Linker));/*��linker����ṹ���������*/
		InputData(&Linker);
		SaveToFile(&Linker);
	  	printf("\n�Ƿ���������ϵ��?(*/n):");
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
		  	printf("��ϵ��ʽ:Null\n");
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
		printf("�ѳɹ�����!\n");
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
		printf("���ݲ�����!\n");
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
	if (a==0)	printf("\n�ɹ�ɾ��!\n");
	else 		printf("\nδ�ܳɹ�ɾ��!��ԭ����: ");
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
	printf("������Ҫ���ҵ�����:");
	gets(InputKeys);
	printf("���������ש��������������ש��������������ש��������������ש�����������������\n");
	printf("�����\t������\t\t���绰\t\t����ͥ�绰\t����ַ\t\t  ��\n");
	printf("�ǩ������ߩ��������������ߩ��������������ߩ��������������ߩ�����������������\n");
	file=fopen("linkman.dat","r");
	for (int i = 0; i < TotalCount; i++)
	{
			fseek(file,sizeof(struct LINKER)*i,SEEK_SET);
			fread(&Linker,sizeof(struct LINKER),1,file);
			if (strcmp(Linker.Name,InputKeys) == 0)
			{
				FoundCount++;
				printf("��%d\t %s\t\t %s\t\t %s\t\t %s\t\t  \n",i+1,Linker.Name,Linker.Tel,Linker.HomeTel,Linker.Address);
				printf("�ǩ�������������������������������������������������������������������������\n");
			} 
			if (strcmp(Linker.Tel,InputKeys) == 0)
			{
				printf("��%d\t %s\t\t %s\t\t\t\t\t\t  \n",i+1,Linker.Name,Linker.Tel);
				printf("�ǩ�������������������������������������������������������������������������\n");
				FoundCount++;
			} 
			if (strcmp(Linker.HomeTel,InputKeys) == 0)
			{
				printf("��%d\t %s\t\t\t\t %s\t\t\t\t  \n",i+1,Linker.Name,Linker.HomeTel);
				printf("�ǩ�������������������������������������������������������������������������\n");
				FoundCount++;
			} 
			if (strcmp(Linker.Address,InputKeys) == 0)
			{
				printf("��%d\t %s\t\t\t\t\t\t %s\t\t  \n",i+1,Linker.Name,Linker.Address);
				printf("�ǩ�������������������������������������������������������������������������\n");
				FoundCount++;
			} 
	}
	fclose(file);
	printf("����������������������������������������������������������������������������\n");
	printf("\n");
	if (FoundCount == 0)	
	{
		printf("û���ҵ� \" %s \" ����Ϣ!\n",InputKeys);
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
			printf("����������������������������������������������������������������������������\n");
			printf("��%s%d\n", ListTitle[0],i+1);
			printf("�ǩ�������������������������������������������������������������������������\n");
			printf("��%s", ListTitle[1]);
			printf("%s\n",Linker.Name );
			printf("�ǩ�������������������������������������������������������������������������\n");
			printf("��%s", ListTitle[2]);
			printf("%s\n",Linker.Tel );
			printf("�ǩ�������������������������������������������������������������������������\n");
			printf("��%s", ListTitle[3]);
			printf("%s\n",Linker.HomeTel );
			printf("�ǩ�������������������������������������������������������������������������\n");
			printf("��%s", ListTitle[4]);
			printf("%s\n",Linker.Address );
			printf("����������������������������������������������������������������������������\n\n\n");
		}
	}
	fclose(file);
	getch();
}
