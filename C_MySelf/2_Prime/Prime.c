#include <windows.h>
#include <stdio.h>
#include <math.h>

#define Size 100

int Found( int Arry[]);
int main()
{
    int Arry[Size]={0};
    Found(Arry);

    system("pause");
    return 0;
}

int Found( int Arry[])
{
	int j=0;
	for (int num = Size; num <= Size + 100 ; num++)
	{
		for (int i = 2; i <= sqrt(num); i++)	
		{
			if(num % i == 0)		
			{
				break;
			}
			else if(i>sqrt(num)-1)
			{
				Arry[j] = num;
				j++;
			}
			else
			{
				continue;
			}
			
		}
	}
	for (int k = 0; k < j; k++)
	{
		printf("%d ",Arry[k] );
		if(k % 10 == 0)
		{
		    printf("\n");      
		}
		
	}
	return 0;
}
