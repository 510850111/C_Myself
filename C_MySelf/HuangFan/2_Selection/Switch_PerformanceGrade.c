/*
	����:
		ʹ��switch���ʵ�ֳɼ��ĵȼ��ּ�,�ȼ��ּ�����:
			100��:		S
			90-99��	A
			80-89��	B
			70-79��	C
			60-69��	D
			60������	E
		Example:
			����:68	���:Grade:D
			����:32	���:Grade:E
			����:100	���:Grade:S
			����:83	���:Grade:B
			����:1234	���:�������!����������!(��ʱӦ����������)
			����:-69	���:�������!����������!(��ʱӦ����������)

	�ؼ�˼·:
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
	printf("���������:");
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
			printf("�������!����������!\n");
			main();
	}	
}

