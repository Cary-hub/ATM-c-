#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void mima(char *pass);
void zhuce_gly()
{
FILE *p_gl,*p1_gl;
	int i,id=0,key;
	char pass[20],pa[20];
	if((p1_gl=fopen("jishu_gl.txt","r"))!=NULL)
	{
		fscanf(p1_gl,"%d",&id);
		fclose(p1_gl);
	}
	id++;
	printf("\n\n\n\t\t\t请您根据提示输入相关信息\n");
	printf("\t\t\t━━━━━━━━━━━━━━━━\n\n");
	printf("\t\t\t请输入管理员注册口令:");
	scanf("%d",&key);
	printf("\n");
	if(key==123)
	{
		
		for(i=0;i<3;i++)
		{
			printf("\t\t\t请输入管理员密码:");
			mima(pass);
			printf("\n");
			printf("\t\t\t请您再次输入确认:");
			mima(pa);
			if(strcmp(pass,pa)==0)
			{  
				p1_gl=fopen("jishu_gl.txt","w");
				fprintf(p1_gl,"%d",id);
				fclose(p1_gl);
				p_gl=fopen("xinxi_gl.txt","a");
				fprintf(p_gl,"%d\t%s\n",id,pass);
				fclose(p_gl);
				printf("\n\n\t\t\t━━━━━━━━━━━━━━━━\n\n");
				printf("\t\t\t您的管理员账号是:%d\n",id);
				printf("\n\t\t\t━━━━━━━━━━━━━━━━\n\n");
				printf("\t\t\t管理员注册成功！\n\n");
				printf("\t\t\t\t   ┏━━━┓\n");
				printf("\t\t\t\t   ┃ Enter┃\n");
				printf("\t\t\t\t   ┗━━━┛\n");
				getchar();
				getchar();
				break;
			}
			else
			{
				printf("\n\n\t\t\t密码输入错误!\n\n");
			}
		}
		if(i==3)
		{
			printf("\t\t\t━━━━━━━━━━━━━━━━\n");
			printf("\n\t\t\t密码3次输入错误！注册失败\n\n");
			getchar();
			getchar();
		}
	}
	else
	{
		printf("\t\t\t━━━━━━━━━━━━━━━━\n");
		printf("\n\t\t\t口令输入错误,您无权注册管理员!\n");
		getchar();
		getchar();
	}
}
