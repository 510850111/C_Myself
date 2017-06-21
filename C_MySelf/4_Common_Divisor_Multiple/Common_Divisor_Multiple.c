#include <windows.h>
#include <stdio.h>
int Divisor_Multiple(int num1,int num2);
int main()
{
	int num1=0,num2=0;
	system ("Title 求最大公约数和最小公倍数");
    printf("请输入两个数,用逗号隔开:");
    scanf("%d %d",&num1,&num2);
    if(num1 < num2)/*如果n1<n2,则两个数交换*/
    {
        num1=num1^num2;
        num2=num2^num1;
        num1=num1^num2;      
    }
    Divisor_Multiple(num1,num2);
    system("pause");
    return 0;
}

int Divisor_Multiple(int num1,int num2)
{
					/* 默认n1>=n2 */
	int Product=0;/*两个数的的乘积*/
	int Remainder=0;/*余数*/
	Product = num1 * num2;
	Remainder = num1 % num2;
	while(Remainder != 0)
	{
	  num1=num2;
	  num2=Remainder;
	  Remainder=num1 % num2;
	}
	printf("最大公约数为:%d\n",num2);
	printf("最大公倍数为:%d\n",Product / num2 );
}


/*
辗转相除法求两个数的最大公约数的步骤如下：
先用小的一个数除大的一个数,得第一个余数；
再用第一个余数除小的一个数,得第二个余数；
又用第二个余数除第一个余数,得第三个余数；
这样逐次用后一个数去除前一个余数,直到余数是0为止.
那么,最后一个除数就是所求的最大公约数（如果最后的除数是1,那么原来的两个数是互质数）.
例如求1515和600的最大公约数,
第一次：用600除1515,商2余315；
第二次：用315除600,商1余285；
第三次：用285除315,商1余30；
第四次：用30除285,商9余15；
第五次：用15除30,商2余0.
1515和600的最大公约数是15.
辗转相除法是求两个数的最大公约数的方法.
如果求几个数的最大公约数,可以先求两个数的最大公约数,
再求这个最大公约数与第三个数的最大公约数.
这样依次下去,直到最后一个数为止.
最后所得的一个最大公约数,就是所求的几个数的最大公约数.
*/
