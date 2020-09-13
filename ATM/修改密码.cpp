#include <stdio.h>
#include <string.h>
#include "jiegou.h"
void mima(char *newp);
void mima(char *newq);
void xiugai(int z,char *pass)
{
	int i,n;
	char newp[20],newq[20];
	oth b[100];
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
	printf("\n\n\n\t\t\t修改密码业务\n");
	printf("\t\t\t━━━━━━━━━━━━━━━━\n\n");
	printf("\t\t\t请输入新密码:");
	mima(newp);
	printf("\n\t\t\t请再输入确认:");
	mima(newq);
	for(i=0;i<n;i++)
	{
		if((z==b[i].id)&&(strcmp(newp,newq)==0)&&strlen(newp)==6&&strlen(newq)==6)
		{
			strcpy(b[i].pass,newp);
			printf("\n\t\t\t━━━━━━━━━━━━━━━━\n");
			printf("\n\t\t\t\t  密码修改成功！\n\n");
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
		printf("\n\t\t\t\t  密码修改失败！\n\n");
		printf("\t\t\t\t   ┏━━━┓\n");
 		printf("\t\t\t\t   ┃ Enter┃\n");
		printf("\t\t\t\t   ┗━━━┛\n");
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
