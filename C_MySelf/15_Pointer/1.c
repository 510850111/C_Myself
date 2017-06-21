#include <stdio.h>
#include<windows.h>
int main(void)
{
	int num = 1;
	int *ptr1 = &num;
	int **ptr2 = &ptr1;
	printf("Name\tNumber\tAddress \n");
	printf("num\t %d\t%X\n", num,&num);
	printf("*ptr1\t%X\t%X\n", ptr1,&ptr1);
	printf("**ptr2\t%X\t%x\t\n", ptr2,&ptr2);
	////////////////////////////////////////////////
	printf("-----------------------------------\n");
	printf("num\t %d\t%s\n", num,&num);
	printf("*ptr1\t%s\t%s\n", ptr1,&ptr1);
	printf("**ptr2\t%s\t%s\t\n", ptr2,&ptr2);
	system ("pause");
	return 0;
}
