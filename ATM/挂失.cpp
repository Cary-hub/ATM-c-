#include <stdio.h>
#include "jiegou.h"
#include <string.h>
void guashi()
{
	int i,n;
	char name[20],sfz[20];
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
	printf("\n\n\n\t\t\t挂失业务\n");
	printf("\t\t\t━━━━━━━━━━━━━━━━\n\n");
	printf("\t\t\t请输入您的姓名:");
	scanf("%s",name);
	printf("\t\t\t请输入身份证号:");
	scanf("%s",sfz);
	for(i=0;i<n;i++)
	{
		if((strcmp(name,b[i].name)==0)&&(strcmp(sfz,b[i].sfz)==0))
		{
			b[i].key=0;
			printf("\n\t\t\t━━━━━━━━━━━━━━━━\n");
			printf("\n\t\t\t\t    挂失成功！\n\n");
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
			printf("\n\t\t\t      输入错误，挂失失败！\n\n");
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