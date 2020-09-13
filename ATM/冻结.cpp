#include <stdio.h>
#include "jiegou.h"
#include <string.h>
void dongjie(int z)
{
	int i,n;
	oth b[1000];
	
FILE *p,*p1;
	p1=fopen("jishu.txt","r");
	fscanf(p1,"%d",&n);
	fclose(p1);
	p=fopen("xinxi.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(p,"%d%s%s%f%s%s%s%d",&b[i].id,b[i].name,b[i].pass,&b[i].money,b[i].sfz,b[i].tel,b[i].addr,&b[i].key);
	}
	fclose(p);
	for(i=0;i<n;i++)
	{
		if(z==b[i].id)
		{
			b[i].key=0;
			printf("\n\n\t\t\t━━━━━━━━━━━━━━━━\n\n");
			printf("\t\t\t您的账户已被冻结，请与管理员联系！\n");
			getchar();
			getchar();
			break;
		}
	}
	if(i==n)
	{
		printf("\n\n\t\t\t━━━━━━━━━━━━━━━━\n\n");
		printf("\t\t\t账号错误，请核对！\n\n");
		getchar();
		getchar();
	}
	p=fopen("xinxi.txt","w");
	for(i=0;i<n;i++)
	{
		fprintf(p,"%d\t%s\t%s\t%.2f\t%s\t%s\t%s\t%d\n",b[i].id,b[i].name,b[i].pass,b[i].money,b[i].sfz,b[i].tel,b[i].addr,b[i].key);
	}
	fclose(p);
}