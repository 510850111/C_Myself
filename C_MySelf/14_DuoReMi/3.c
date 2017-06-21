#include<stdio.h>
#include <windows.h>
#define DY_do 131
#define D_sdo 139
#define DY_re 147
#define D_sre 156
#define DY_mi 165
#define DY_fa 175
#define D_sfa 185
#define DY_so 196
#define D_sso 208
#define DY_la 220
#define D_sla 233
#define DY_xi 247
#define ZY_do 262
#define Z_sdo 277
#define ZY_re 294
#define Z_sre 311
#define ZY_mi 330
#define ZY_fa 349
#define Z_sfa 370
#define ZY_so 392
#define Z_sso 415
#define ZY_la 440
#define Z_sla 466
#define ZY_xi 494
#define GY_do 523
#define G_sdo 554
#define GY_re 587
#define G_sre 622
#define GY_mi 659
#define GY_fa 698
#define G_sfa 740
#define GY_so 784
#define G_sso 831
#define GY_la 880
#define G_sla 932
#define GY_xi 988
#define CY_do 1046
#define C_sdo 1108
#define CY_re 1174
#define C_sre 1244
#define CY_mi 1318
#define CY_fa 1396
#define C_sfa 1480
#define CY_so 1568
#define C_sso 1661
#define CY_la 1760
#define C_sla 1864
#define CY_xi 1976
#define SY_do 2092
#define S_sdo 2216
#define SY_re 2348
#define S_sre 2488
#define SY_mi 2636
#define SY_fa 2792
#define S_sfa 2960
#define SY_so 3136
#define S_sso 3322
#define SY_la 3520
#define S_sla 3728
#define SY_xi 3952


int main()
{
	system ("Title 贝加尔湖畔");
	int const Time = 290;

	//在你的怀里
	printf("在你的怀里\n");
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_do, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Sleep(Time * 3);

	//在你的眼里
	printf("在你的眼里\n");
	Sleep(Time);
	Beep(DY_so, Time);
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_mi, Time);
	Sleep(3 * Time);

	//那里春风沉醉
	printf("那里春风沉醉\n");
	Sleep(Time);
	Beep(ZY_mi, Time / 1.5);
	Beep(ZY_mi, Time);
	Beep(ZY_la, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_re, Time);
	Sleep(Time * 2);

	//那里绿草如茵
	printf("那里绿草如茵\n");
	Sleep(Time * 2);
	Beep(DY_xi, Time / 1.5);
	Beep(DY_xi, Time);
	Beep(ZY_do, Time);
	Beep(ZY_re, Time);
	Sleep(Time / 5);
	Beep(ZY_fa, Time);
	Beep(ZY_mi, Time);
	Sleep(Time * 3);

	//月光把爱恋
	printf("月光把爱恋\n");
	Sleep(Time * 2);
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_do, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Sleep(Time * 3);

	//洒满了湖面
	printf("洒满了湖面\n");
	Sleep(Time);
	Beep(DY_so, Time);
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_mi, Time);
	Sleep(3 * Time);

	//两个人的篝火
	printf("两个人的篝火\n");
	Sleep(Time);
	Beep(ZY_mi, Time / 1.5);
	Beep(ZY_mi, Time);
	Beep(ZY_la, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_re, Time);
	Sleep(Time);

	//照亮整个夜晚
	printf("照亮整个夜晚\n");
	Sleep(Time * 2);
	Beep(DY_xi, Time / 1.5);
	Beep(DY_xi, Time);
	Beep(ZY_mi, Time);
	Beep(ZY_re, Time * 1.5);
	Beep(ZY_do, Time / 5);
	Beep(DY_xi, Time);
	Beep(DY_la, Time);
	Sleep(Time);


	//多少年以后
	printf("多少年以后\n");
	Beep(DY_la, Time / 5);
	Beep(DY_la, Time);
	Beep(DY_la, Time);
	Beep(ZY_la, Time);
	Beep(ZY_la, Time * 3);
	Sleep(Time );

	//如云般游走
	printf("如云般游走\n");
	Sleep(Time * 2);
	Beep(DY_la, Time / 5);
	Beep(ZY_la, Time);
	Sleep(Time);
	Beep(ZY_so, Time / 3);
	Beep(ZY_la, Time / 3);
	Beep(ZY_so, Time / 3);
	Sleep(Time);
	Beep(ZY_mi, Time * 3);
	Sleep(Time * 2);

	//那变换的脚步
	printf("那变换的脚步\n");
	Sleep(Time);
	Beep(ZY_mi, Time / 1.5);
	Beep(ZY_mi, Time);
	Beep(ZY_la, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_re, Time);
	Sleep(Time * 2);


	//让我们难牵手
	printf("让我们难牵手\n");
	Sleep(Time * 2);
	Beep(DY_xi, Time / 1.5);
	Beep(DY_xi, Time);
	Beep(ZY_do, Time);
	Beep(ZY_re, Time);
	Sleep(Time / 5);
	Beep(ZY_fa, Time);
	Beep(ZY_mi, Time * 3);
	Sleep(Time * 3);


	//这一生一世
	printf("这一生一世\n");
	Beep(DY_la, Time / 5);
	Beep(DY_la, Time);
	Beep(DY_la, Time);
	Beep(ZY_la, Time);
	Beep(ZY_la, Time * 3);
	Sleep(Time * 3);

	//有多少你我
	printf("有多少你我\n");
	Sleep(Time);
	Beep(ZY_xi, Time / 5);
	Beep(GY_do, Time);
	Beep(GY_re, Time);
	Beep(GY_do, Time);
	Beep(ZY_mi, Time * 3);
	Sleep(Time );


	//被吞没在月光如水的月里
	printf("被吞没在月光如水的夜里\n");
	Sleep(Time);
	Beep(ZY_mi, Time / 5);
	Beep(ZY_mi, Time);
	Beep(ZY_la, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_re, Time);
	Sleep(Time * 2);
	Beep(ZY_so, Time);
	Beep(ZY_la, Time);
	Beep(ZY_xi, Time * 2.5);
	Beep(GY_mi, Time * 4);
	Beep(ZY_xi, Time);
	Beep(ZY_so, Time);
	Beep(ZY_mi, Time * 2);

	//多想某一天
	printf("多想某一天\n");
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_do, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time * 2);
	Sleep(Time * 2);

	//往日又重现
	printf("往日又重现\n");
	Sleep(Time);
	Beep(DY_so, Time);
	Beep(DY_la, Time);
	Beep(DY_xi, Time);
	Beep(ZY_fa, Time);
	Beep(ZY_mi, Time);
	Sleep(3 * Time);

	//我们流连忘返
	printf("我们流连忘返\n");
	Sleep(Time);
	Beep(ZY_mi, Time / 5);
	Beep(ZY_mi, Time);
	Beep(ZY_la, Time);
	Beep(ZY_so, Time);
	Beep(ZY_fa, Time * 1.2);
	Beep(ZY_re, Time * 2);
	Sleep(Time * 2);

	//在贝加尔湖畔
	printf("在贝加尔湖畔\n");
	Sleep(Time);
	Beep(DY_xi, Time);
	Beep(DY_xi, Time);
	Beep(ZY_mi, Time);
	Beep(ZY_re, Time * 1.5);
	Beep(DY_xi, Time / 5);
	Beep(DY_re, Time / 5);
	Beep(DY_la, Time * 3);
	Sleep(Time * 3);

	system("pause");
	return 0;
}

