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
��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
1.��������������ڰ�λ��ʮλ����λ�����ֶ���1��2��3��4��������е����к���ȥ
�����������������������������С�

*/
