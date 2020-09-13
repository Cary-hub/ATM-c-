#include <stdio.h>
#include <stdlib.h>
int guanliyuancaidan()
{
	int n;
	system("cls");
	printf("\n\n\n\t\t\t请 管 理 员 选 择 相 关 业 务\n");
	printf("\t\t\t━━━━━━━━━━━━━━━━\n\n");
	printf("\t\t\t信 息 查 询\n");
	printf("\t\t\t━━━━━━①\n");
    printf("\t\t\t账 户 冻 结\n");
	printf("\t\t\t━━━━━━②\n");
	printf("\t\t\t账 户 解 冻\n");
	printf("\t\t\t━━━━━━③\n");
	printf("\t\t\t账 户 注 销\n");
	printf("\t\t\t━━━━━━④\n");
	printf("\t\t\t返回上一层\n");
	printf("\t\t\t━━━━━━⑤\n\n\n");
	printf("\t\t\t请您选择:");
	scanf("%d",&n);
	system("cls");
	return(n);
}