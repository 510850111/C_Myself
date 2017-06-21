/*
	这个是一个猜数字的程序,只需要你读懂它的源代码就好了

*/

#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
int gamestart();//开始游戏
int makenumber();//此函数用来产生随机数
int ret(int guessnumber, int randnumber); //此函数用来判断用户输入的数据和随机数的大小
int yes_or_no();//判断用户是否继续玩下去

int main()//这是一个让用户猜数字的程序
{
	gamestart();
	system ("pause");
	return 0;
}
int gamestart()
{
	int guesstimes = 0;		//用户猜测的次数
	int guessnumber = 0;		//用户输入的数字
	int randnumber1 = 0;		//产生的随机数
	int ret_ret = 0;			//ret函数的返回值
	randnumber1 = makenumber(); //产生随机数
	printf("=====================\n");
	printf("请输入1~100之间的数字\n");
	printf("=====================\n");
	while (1)
	{
		printf("\n");
		printf("请输入一个数:");
		scanf("%d", &guessnumber);
		ret_ret = ret(guessnumber, randnumber1); //获取ret函数中返回的-1,0,1中的三个值
		guesstimes = guesstimes + 1;			 //用户猜测的次数+1
		if (ret_ret == 0) break;				 //如果用户猜正确,跳出循环
	}

	printf("\n");
	printf("========================\n");
	printf("随机数是%d,你猜了%d次\n", randnumber1, guesstimes);
	yes_or_no();

}
int makenumber()//此函数用来产生随机数
{
	int randnumber = 0;		//产生的随机数
	srand((int) time(0));		//使用时间来初始化随机种子
	randnumber = rand() % 100 + 1; //获得范围在1~100的随机数
	return randnumber;
}

int ret(int guessnumber, int randnumber) //此函数用来判断用户输入的数据和随机数的大小
{
	int i = 0; //用户是否猜对

	if (guessnumber > randnumber)
	{
		printf("你猜的数大了哦\n");
		i = 1;
	}
	else if (guessnumber == randnumber)
	{
		printf("恭喜猜对了\n");
		i = 0;
	}
	else
	{
		printf("你猜的数小了哦\n");
		i = -1;
	}
	return i;

}

int yes_or_no()
{
	while (1)
	{
		char yes_or_no_choose = 'y';		//是否继续玩下去
		printf("你还要继续玩下去吗?(Y/N): ");
		getchar();				//读取内存中的回车键或归位键,以防止程序出现异常
		yes_or_no_choose = getchar();
		switch (yes_or_no_choose)
		{
		case 'y':
		case 'Y':
			gamestart();
		case 'n':
		case 'N':
			return 0;
		}
	}
}
