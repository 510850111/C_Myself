#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <dos.h> 
#include <string.h>
void goto_xy(int x,int y);
int main()
{
	system ("cls");
    int b=0;
    int a=0;
    int c=0;
    int x=15;
    int y=11;
    int zz=0;
    char a1[100];
    char b1[100];
    char c1[100];
    char d1[100];
    char zq;
    system("color 0A");
    srand((unsigned)time(NULL));
    printf("                           �������齱��������\n");
	printf("\n                          �����������ʼ��");
    getch();
    system("cls");
    while(zz<=10)
        {
            printf("\n\n\n\n\n\n\n\n\n");
        	printf("             ������������       ������������        ������������   \n");
            printf("             ��        ��       ��        ��        ��        ��\n");
            printf("             ������������       ������������        ������������    \n");
            a=rand()%3;
            b=rand()%3;
            c=rand()%3;
            if(a==0)
          	{strcpy(a1,"�տ���Ҳ");}
            else if(a==1)
            {strcpy(a1,"���뽱Ʒ");}
            else if(a==2)
            {strcpy(a1,"һ�Ŵ�");}
            else if(a==3)
            {strcpy(a1,"һ������");}
    		if(b==0)
        	{strcpy(b1,"�տ���Ҳ");}
            else if(b==1)
            {strcpy(b1,"���뽱Ʒ");}
            else if(b==2)
            {strcpy(b1,"һ�Ŵ�");}
            else if(b==3)
            {strcpy(b1,"һ������");}
    		if(c==0)
            {strcpy(c1,"�տ���Ҳ");}
            else if(c==1)
           	{strcpy(c1,"���뽱Ʒ");}
            else if(c==2)
           	{strcpy(c1,"һ�Ŵ�");}
            else if(c==3)
           	{strcpy(c1,"һ������");}
                                            
            goto_xy(x,y); 
            system("color 0A");
            printf("%s��       ��%s��        ��%s��",a1,b1,c1);
            zz++;
            Sleep(500);
            system("cls");
    }
            system("cls");
            printf("                           �������齱��������\n");
            printf("                                                        �����������ʼ��");
            printf("\n\n\n\n\n\n\n\n\n");
            printf("             ������������       ������������        ������������   \n");
            printf("             ��        ��       ��        ��        ��        ��\n");
            printf("             ������������       ������������        ������������    \n");
          	if(a==0)
              	{strcpy(a1,"�տ���Ҳ");}
          	else if(a==1)
             	 {strcpy(a1,"�տ���Ҳ");}
         	 else if(a==2)
              	{strcpy(a1,"һ�Ŵ�");}
          	else if(a==3)
              	{strcpy(a1,"һ������");}
          	if(b==0)
              	{strcpy(b1,"�տ���Ҳ");}
          	else if(b==1)
              	{strcpy(b1,"�տ���Ҳ");}
          	else if(b==2)
              	{strcpy(b1,"һ�Ŵ�");}
          	else if(b==3)
              	{strcpy(b1,"һ������");}
          	if(c==0)
              	{strcpy(c1,"�տ���Ҳ");}
          	else if(c==1)
              	{strcpy(c1,"�տ���Ҳ");}
          	else if(c==2)
              	{strcpy(c1,"һ�Ŵ�");}
            else if(c==3)
                {strcpy(c1,"һ������");}
            goto_xy(x,y); 
            printf("%s��       ��%s��        ��%s��",a1,b1,c1);
            system("cls");
            printf("             ������������       ������������        ������������   \n");
            printf("             ��        ��       ��        ��        ��        ��\n");
            printf("             ������������       ������������        ������������    \n");
            y=1;
            goto_xy(x,y); 
            printf("%s��       ��%s��        ��%s��",a1,b1,c1);
            y=10;
            x=20;
            goto_xy(x,y); 
            if(a!=b&&a!=c&&b!=c)
                printf("���ź���ʲôҲû��ã�");
            else if(a==b&&b==c&&a==0)
                printf("��ϲ�����ˡ��տ���Ҳ��");
            else if(a==b&&b==c&&a==1)
                printf("��ϲ�����ˡ��տ���Ҳ��");
            else if(a==b&&b==c&&a==2)
                printf("��ϲ�����ˡ�һ�Ŵ󳮡�");
            else if(a==b&&b==c&&a==3)
                printf("��ϲ�����ˡ�һ��������");
            else
                printf("���ź���ʲôҲû��ã�");
            getch();
            getch();
            main();
            return 0;
}
void goto_xy(int x,int y)//��λ���λ�õ�ָ������
{                                
        HANDLE hOut;
        hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos={x,y};
        SetConsoleCursorPosition(hOut,pos);
}
