#include <windows.h>
#include <stdio.h>

int main()
{
	int count=0;
    for (int i = 1; i < 5; i++)
    {
    	for (int j = 1; j < 5; j++)
    	{
    		for (int k = 1; k < 5; k++)
    		{
    			if ((i != j) && (j != k) && (k != i))
    			{
    				count++;
    				printf("%d%d%d\t",i,j,k );
    			}
    		}
    	}
    }
    printf("\n");
    printf("====================================================\n");
    printf("count=%d\n", count);
    system("pause");
    return 0;
}



/*
题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去
　　　　　　掉不满足条件的排列。

*/
