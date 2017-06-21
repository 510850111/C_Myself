#include <windows.h>
#include <stdio.h>
#define N 10
int main()
{
    int arry[N] = {0,1,2,3,4,5,6,7,8,9};
    int i;
    for ( i = 0; i < 10; ++i)
    {
    	printf("arry[%d]=%d,(arry+i) = %X  \n", i,arry[i], (arry + i));
    }

    system("pause");
    return 0;
}

