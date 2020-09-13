#include <stdio.h>
#include <string.h>
#include "jiegou.h"
void cha(int z,char *pass)
{
int n;
int i;
oth b[100];
FILE *p,*p1;
	p1=fopen("jishu.txt","r");
	fscanf(p1,"%d",&n);
	fclose(p1);
	p=fopen("xinxi.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(p,"%d%s%s%f%s%s%s%d",&b[i].id,b[i].name,b[i].pass,&b[i].money,b[i].sfz,b[i].tel,b[i].addr,&b[i].key);
		if((z==b[i].id)&&(strcmp(pass,b[i].pass)==0))
		{
			printf("\n\n\n\t\t\t余额查询业务\n");
			printf("\t\t\t━━━━━━━━━━━━━━━━\n\n");
			printf("\t\t\t用户编号:%d\n",b[i].id);
			printf("\t\t\t用户余额:%.2f\n",b[i].money);
			printf("\n\t\t\t━━━━━━━━━━━━━━━━\n\n");
			printf("\t\t\t\t   ┏━━━┓\n");
 			printf("\t\t\t\t   ┃ Enter┃\n");
			printf("\t\t\t\t   ┗━━━┛\n");
			getchar();
			getchar();
			break;
		}
	}
}
