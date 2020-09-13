#include <stdio.h>
#include <string.h>
#include "jiegou.h"
void dongjie()
{
	int i,n,id;
	oth b[100];
	FILE *p,*p1;
	printf("\n\n\n\t\t\t账户冻结\n");
	printf("\t\t\t━━━━━━━━━━━━━━━━\n\n");
	printf("\t\t\t请输入用户账号:");
	scanf("%d",&id);
	p1=fopen("jishu.txt","r");
	fscanf(p1,"%d",&n);
	fclose(p1);
	p=fopen("xinxi.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(p,"%d%s%s%f%s%s%s%d",&b[i].id,b[i].name,b[i].pass,&b[i].money,b[i].sfz,b[i].tel,b[i].addr,&b[i].key);
	
	}
	for(i=0;i<n;i++)
	{
		if(id==b[i].id)
		{
			b[i].key=0;
			printf("\n\t\t\t━━━━━━━━━━━━━━━━\n");
			printf("\n\t\t\t\t  账户冻结成功！\n\n");
			printf("\t\t\t\t   ┏━━━┓\n");
 			printf("\t\t\t\t   ┃ Enter┃\n");
			printf("\t\t\t\t   ┗━━━┛\n");
			getchar();
			getchar();
			break;
		}
	}
	if(i==n)
	{
		printf("\n\t\t\t━━━━━━━━━━━━━━━━\n");
		printf("\n\t\t\t\t  账号输入错误！\n\n");
		printf("\t\t\t\t   ┏━━━┓\n");
 		printf("\t\t\t\t   ┃ Enter┃\n");
		printf("\t\t\t\t   ┗━━━┛\n");
		getchar();
		getchar();
	}
	fclose(p);
	p=fopen("xinxi.txt","w");
	for(i=0;i<n;i++)
	{
		fprintf(p,"%d\t%s\t%s\t%.2f\t%s\t%s\t%s\t%d\n",b[i].id,b[i].name,b[i].pass,b[i].money,b[i].sfz,b[i].tel,b[i].addr,b[i].key);
	}
	fclose(p);
}
