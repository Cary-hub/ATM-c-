#include<stdio.h>
#include"jiegou.h"
#include<string.h>
void qu(int z,char *pass)
{


int n;
float je;
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
	}
	fclose(p);
	printf("\n\n\n\t\t\t取款业务\n");
	printf("\t\t\t━━━━━━━━━━━━━━━━\n\n");
	printf("\t\t\t取款金额为百元的整数倍！\n\n");
	printf("\t\t\t请输入取款金额:");
	scanf("%f",&je);
	for(i=0;i<n;i++)
	{
		if((z==b[i].id)&&(strcmp(pass,b[i].pass)==0))
		{

			if((int)je%100==0&&b[i].money-je>=0)
			{
				b[i].money-=je;
				printf("\n\t\t\t━━━━━━━━━━━━━━━━\n");
				printf("\n\t\t\t\t    取款成功！\n\n");
				printf("\t\t\t\t   ┏━━━┓\n");
 				printf("\t\t\t\t   ┃ Enter┃\n");
				printf("\t\t\t\t   ┗━━━┛\n");
				getchar();
				getchar();
				break;
			}
			if(b[i].money-je<0)
			{
				printf("\n\t\t\t━━━━━━━━━━━━━━━━\n");
				printf("\n\t\t\t\t    余额不足！\n\n");
				printf("\t\t\t\t   ┏━━━┓\n");
 				printf("\t\t\t\t   ┃ Enter┃\n");
				printf("\t\t\t\t   ┗━━━┛\n");
				getchar();
				getchar();
				break;
			}
			if((int)je%100!=0)
			{
				printf("\n\t\t\t━━━━━━━━━━━━━━━━\n");
				printf("\n\t\t\t    取款金额不是100的整数倍！\n\n");
				printf("\t\t\t\t   ┏━━━┓\n");
 				printf("\t\t\t\t   ┃ Enter┃\n");
				printf("\t\t\t\t   ┗━━━┛\n");
				getchar();
				getchar();
				break;
			}
		}	
	}
	p=fopen("xinxi.txt","w");
	for(i=0;i<n;i++)
	{
		fprintf(p,"%d\t%s\t%s\t%.2f\t%s\t%s\t%s\t%d\n",b[i].id,b[i].name,b[i].pass,b[i].money,b[i].sfz,b[i].tel,b[i].addr,b[i].key);
	}
	fclose(p);
}
