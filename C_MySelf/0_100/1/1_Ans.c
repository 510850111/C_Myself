#include "stdio.h"
#include "conio.h"
main()
{
  int i,j,k,count=0;
  printf("\n");
  for(i=1;i<5;i++) /*����Ϊ����ѭ��*/
    for(j=1;j<5;j++)
      for (k=1;k<5;k++)
      {
        if (i!=k&&i!=j&&j!=k) /*ȷ��i��j��k��λ������ͬ*/
        {
        	printf("%d,%d,%d\n",i,j,k);
        	count++;
        }
      }
      printf("=======%d\n",count );
  getch();
}