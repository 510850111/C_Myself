#include <windows.h>
#include <stdio.h>

int main()
{
    int Arry[3][3]={0};
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
    	for (int j = 0; j < 3; j++)
    	{
    		printf("请输入Arry[%d][%d]的值:", i,j);
    		scanf("%d",&Arry[i][j]);
    	}
    }
    system ("cls");
    printf("------输入结束------\n");

    for (int i = 0; i < 3; i++)
    {
    	for (int j = 0; j < 3; j++)
    	{
    		(j == 2)? (printf("%d\n",Arry[i][j])):(printf("%d\t",Arry[i][j]));
    		if(i==j)
    		{
    		 	sum += Arry[i][j];
    		}
    		
    	}
    }
    printf("sum=%d\n",sum);
    system("pause");
    return 0;
}

