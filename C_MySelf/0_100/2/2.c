/*
题目：企业发放的奖金根据利润提成。
利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时,高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%，
高于100万元时，超过100万元的部分按1%提成，
从键盘输入当月利润I，求应发放奖金总数？
1.程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成整型。
*/

#include <windows.h>
#include <stdio.h>
int JiangJin(double I);
int main()
{
    double I=0.00;//利润(万元)
    double k=0;
    printf("请输入当月利润: ");
    scanf("%d",&I);
    printf("提成为: %lf 万元",JiangJin(I));		
    system("pause");
    return 0;
}

int JiangJin(double I)
{
	printf("%s---I=%d\n",__func__,I );
	int j=0;
	j = I*0.1;
	printf("j=%d\n",j);
	switch (j)
	{
		case 0:
			return I * 0.1;	
		case 1:
			return (I-10)* 0.075+1;	
		case 2:
		case 3: 
			return (I-20) *0.05;	
		case 4: 
		case 5: 
			return (I-40) *0.03;
		case 6: 
		case 7: 
		case 8: 
		case 9: 
			return (I-60) *0.015;
		default :
			return (I-100) *0.01;
	}
}
