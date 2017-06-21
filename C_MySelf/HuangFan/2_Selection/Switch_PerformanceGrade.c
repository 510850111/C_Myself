/*
	需求:
		使用switch语句实现成绩的等级分级,等级分级如下:
			100分:		S
			90-99分	A
			80-89分	B
			70-79分	C
			60-69分	D
			60分以下	E
		Example:
			输入:68	输出:Grade:D
			输入:32	输出:Grade:E
			输入:100	输出:Grade:S
			输入:83	输出:Grade:B
			输入:1234	输出:输入错误!请重新输入!(此时应该重新输入)
			输入:-69	输出:输入错误!请重新输入!(此时应该重新输入)

	关键思路:
		100 / 10 = 10
		98 /10 = 9
		68 /10 = 6
		32 / 10 = 3
*/

#include <windows.h>
#include <stdio.h>

void Grade(int score);

int main()
{
	int score;
	printf("请输入分数:");
	scanf("%d",&score);
	score = score /10;
	Grade(score);

	system("pause");
	return 0;
}

void Grade(int score)
{
	switch (score)
	{
		case 10:
			printf("Grade : S\n");
			break;
		case 9: 
			printf("Grade : A\n");
			break;
		case 8:
			printf("Grade : B\n");
			break;
		case 7: 
			printf("Grade : C\n");
			break;
		case 6: 
			printf("Grade : D\n");
			break;
		case 5: 		
		case 4: 
		case 3: 
		case 2: 
		case 1: 
		case 0: 
			printf("Grade : E\n");
			break;
		default   :
			printf("输入错误!请重新输入!\n");
			main();
	}	
}

