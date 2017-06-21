#include<stdio.h>
#include <windows.h>


int main()
{
   for (int i = 512; i < 1000; ++i)
   {
   	Beep(i,250);
   	//Sleep(20);
   	printf("i = %d\n", i);
   	
   }
    system("pause");
    return 0;
}

