#include<stdio.h>
#include<string.h>
#include"jiegou.h" 
#include<time.h>
#include<stdlib.h>
void mima(char *pass);
void mima(char *pa);
void xin()
{
    oth b;
	FILE *p,*p1;
	int n=0,i;
	char pass[20],pa[20];
	b.id=(unsigned)time(NULL);
	if((p1=fopen("jishu.txt","r"))!=NULL)//只读，不删
	{
		fscanf(p1,"%d",&n);
		fclose(p1);
	}
	n++;
	printf("\n\n\n\t\t\t请您根据提示输入相关信息\n");
	printf("\t\t\t━━━━━━━━━━━━━━━━\n\n");
	printf("\t\t\t用户姓名：");
	scanf("%s",b.name);
	printf("\t\t\t身份证号：");
	scanf("%s",b.sfz);
	printf("\t\t\t联系电话：");
	scanf("%s",b.tel);
	printf("\t\t\t家庭住址：");
	scanf("%s",b.addr);
	b.money=0;
	b.key=1;
	for(i=0;i<3;i++)
	{
		printf("\n\t\t\t六位用户密码：");
		mima(pass);
		strcpy(b.pass,pass);
		printf("\n\t\t\t密码重输确认:");
		mima(pa);
		if(strcmp(b.pass,pa)==0&&strlen(pass)==6&&strlen(pa)==6)
		{
			p1=fopen("jishu.txt","w");//只写，删
			fprintf(p1,"%d",n);
			fclose(p1);
			p=fopen("xinxi.txt","a");//可读写，不删
			fprintf(p,"%d\t%s\t%s\t%.2f\t%s\t%s\t%s\t%d\n",b.id,b.name,b.pass,b.money,b.sfz,b.tel,b.addr,b.key);
			fclose(p);
			printf("\n\n\t\t\t━━━━━━━━━━━━━━━━\n\n");
			printf("\t\t\t用户注册成功！\n\n");
			printf("\t\t\t您的账号为:%d\n\n",b.id);
			printf("\t\t\t\t   ┏━━━┓\n");
 			printf("\t\t\t\t   ┃ Enter┃\n");
			printf("\t\t\t\t   ┗━━━┛\n");
			break;
		}
		else
		{
			printf("\n\n\t\t\t密码错误!\n");
		}
	}
	if(i==3)
	{
		printf("\n\t\t\t━━━━━━━━━━━━━━━━\n");
		printf("\n\t\t\t用户密码3次输入错误！注册失败\n\n");
	}
	getchar();
	getchar();
}

