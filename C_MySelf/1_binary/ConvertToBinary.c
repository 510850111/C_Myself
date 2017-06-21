#include <windows.h>
#include <stdio.h>
#define Size 15
int  Convert( int Arry[]);
int main()
{
	int Arry[Size]={0};
    Convert(Arry);
    system("pause");
    main();
    return 0;
}

int Convert(int Arry[])
{
	int moded=0,YuShu=0,InputNumber=0;
	printf("请输入一个十进制数: ");
	scanf("%d",&InputNumber);
	for (int i = 0; i <= Size; i++)
	{
		YuShu = InputNumber % 2;
		Arry[i] = YuShu;
		InputNumber /= 2;	
	}
	for (int j = Size; j >= 0; j--)
	{
		printf("%d", Arry[j]);
		if (j % 4 == 0  )
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
