#include <stdio.h>

void main() {
	int salary,base,gongjijin,yanglao,gongshang,shengyu,yiliao,shiye,quanqin;
	int yanglao1,gongshang1,shengyu1,yiliao1,shiye1,gongjijin1,result;
	printf("输入税前工资:");
	scanf("%d", &salary);
	printf("基数:");
	scanf("%d", &base);
	printf("全勤奖:");
	scanf("%d",&quanqin);

	yanglao1 = 0.2*base;
	yanglao = 0.08*base;
	gongshang1 = 0.005*base;
	gongshang = 0*base;
	shengyu1 = 0.008*base;
	shengyu = 0*base;
	yiliao1 = 0.1*base;
	yiliao = 0.02*base + 3;
	shiye1 = 0.01*base;
	shiye = 0*base;
	gongjijin1 = 0.12*base;
	gongjijin = 0.12*base;
	result = salary - yanglao - gongshang - shengyu - yiliao - shiye - gongjijin;
	int xianjin = yanglao+yiliao+gongjijin+gongshang+shengyu+shiye;
	int xianjin1 = yanglao1+yiliao1+gongjijin1+gongshang1+shengyu1+shiye1;

	printf("======个人缴费|单位缴费======\n\
养老：%8d|%8d\n\
医疗：%8d|%8d\n\
公金：%8d|%8d\n\
工伤：%8d|%8d\n\
生育：%8d|%8d\n\
失业：%8d|%8d\n\
险金：%8d|%8d\n\
保后：%8d\n\
全勤：%8d\n", yanglao,yanglao1,yiliao,yiliao1,gongjijin,gongjijin1,gongshang,gongshang1,shengyu,shengyu1,shiye,shiye1,xianjin,xianjin1,result,result + quanqin);
	printf("税后：\n");
}
