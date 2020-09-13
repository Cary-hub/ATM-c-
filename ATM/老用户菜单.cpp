#include <stdio.h>
#include <stdlib.h>

int laoyonghucaidan()
{
	int n;
	system("cls");
	printf("\n\n\n\t\t\t请 根 据 提 示 选 择 相 关 业 务\n");
	printf("\t\t\t━━━━━━━━━━━━━━━━\n\n");
	printf("\t\t\t存    款\n");
	printf("\t\t\t━━━━━━①\n");
    printf("\t\t\t取    款\n");
	printf("\t\t\t━━━━━━②\n");
	printf("\t\t\t余额查询\n");
	printf("\t\t\t━━━━━━③\n");
	printf("\t\t\t转    账\n");
	printf("\t\t\t━━━━━━④\n");
	printf("\t\t\t修改密码\n");
	printf("\t\t\t━━━━━━⑤\n");
    printf("\t\t\t挂    失\n");
	printf("\t\t\t━━━━━━⑥\n");
	printf("\t\t\t返回上一层\n");
	printf("\t\t\t━━━━━━⑦\n\n\n");
	printf("\t\t\t请您选择:");
	scanf("%d",&n);
	system("cls");
	return(n);
}