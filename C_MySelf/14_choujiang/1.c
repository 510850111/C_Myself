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
    printf("                           □□□抽奖机□□□\n");
	printf("\n                          （按任意键开始）");
    getch();
    system("cls");
    while(zz<=10)
        {
            printf("\n\n\n\n\n\n\n\n\n");
        	printf("             □□□□□□       □□□□□□        □□□□□□   \n");
            printf("             □        □       □        □        □        □\n");
            printf("             □□□□□□       □□□□□□        □□□□□□    \n");
            a=rand()%3;
            b=rand()%3;
            c=rand()%3;
            if(a==0)
          	{strcpy(a1,"空空如也");}
            else if(a==1)
            {strcpy(a1,"参与奖品");}
            else if(a==2)
            {strcpy(a1,"一张大钞");}
            else if(a==3)
            {strcpy(a1,"一辆豪车");}
    		if(b==0)
        	{strcpy(b1,"空空如也");}
            else if(b==1)
            {strcpy(b1,"参与奖品");}
            else if(b==2)
            {strcpy(b1,"一张大钞");}
            else if(b==3)
            {strcpy(b1,"一辆豪车");}
    		if(c==0)
            {strcpy(c1,"空空如也");}
            else if(c==1)
           	{strcpy(c1,"参与奖品");}
            else if(c==2)
           	{strcpy(c1,"一张大钞");}
            else if(c==3)
           	{strcpy(c1,"一辆豪车");}
                                            
            goto_xy(x,y); 
            system("color 0A");
            printf("%s□       □%s□        □%s□",a1,b1,c1);
            zz++;
            Sleep(500);
            system("cls");
    }
            system("cls");
            printf("                           □□□抽奖机□□□\n");
            printf("                                                        （按任意键开始）");
            printf("\n\n\n\n\n\n\n\n\n");
            printf("             □□□□□□       □□□□□□        □□□□□□   \n");
            printf("             □        □       □        □        □        □\n");
            printf("             □□□□□□       □□□□□□        □□□□□□    \n");
          	if(a==0)
              	{strcpy(a1,"空空如也");}
          	else if(a==1)
             	 {strcpy(a1,"空空如也");}
         	 else if(a==2)
              	{strcpy(a1,"一张大钞");}
          	else if(a==3)
              	{strcpy(a1,"一辆豪车");}
          	if(b==0)
              	{strcpy(b1,"空空如也");}
          	else if(b==1)
              	{strcpy(b1,"空空如也");}
          	else if(b==2)
              	{strcpy(b1,"一张大钞");}
          	else if(b==3)
              	{strcpy(b1,"一辆豪车");}
          	if(c==0)
              	{strcpy(c1,"空空如也");}
          	else if(c==1)
              	{strcpy(c1,"空空如也");}
          	else if(c==2)
              	{strcpy(c1,"一张大钞");}
            else if(c==3)
                {strcpy(c1,"一辆豪车");}
            goto_xy(x,y); 
            printf("%s□       □%s□        □%s□",a1,b1,c1);
            system("cls");
            printf("             □□□□□□       □□□□□□        □□□□□□   \n");
            printf("             □        □       □        □        □        □\n");
            printf("             □□□□□□       □□□□□□        □□□□□□    \n");
            y=1;
            goto_xy(x,y); 
            printf("%s□       □%s□        □%s□",a1,b1,c1);
            y=10;
            x=20;
            goto_xy(x,y); 
            if(a!=b&&a!=c&&b!=c)
                printf("很遗憾你什么也没获得！");
            else if(a==b&&b==c&&a==0)
                printf("恭喜你获得了“空空如也”");
            else if(a==b&&b==c&&a==1)
                printf("恭喜你获得了“空空如也”");
            else if(a==b&&b==c&&a==2)
                printf("恭喜你获得了“一张大钞”");
            else if(a==b&&b==c&&a==3)
                printf("恭喜你获得了“一辆豪车”");
            else
                printf("很遗憾你什么也没获得！");
            getch();
            getch();
            main();
            return 0;
}
void goto_xy(int x,int y)//定位光标位置到指定坐标
{                                
        HANDLE hOut;
        hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos={x,y};
        SetConsoleCursorPosition(hOut,pos);
}
