#include <windows.h>
#include <stdio.h>

int main()
{
    int Yi_Yuan=10,Wu_Jiao=5,E_Jiao=2, Yi_Jiao=1;
    for ( Yi_Jiao = 0; Yi_Jiao <= 10; Yi_Jiao++)
    {
    	for ( E_Jiao = 0; E_Jiao <= 5; E_Jiao++)
    	{
    		for ( Wu_Jiao = 0; Wu_Jiao <= 2; Wu_Jiao++)
    		{
    			if(Wu_Jiao*5+E_Jiao*2+Yi_Jiao == Yi_Yuan)
    			{
    			    printf("Yi_Jiao=%d\tE_Jiao=%d\t Wu_Jiao=%d\t \n",Yi_Jiao,E_Jiao,Wu_Jiao );      
    			}
    			
    		}
    	}
    }
    system("pause");
    return 0;
}

