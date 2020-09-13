#include <stdio.h>
#include <string.h>
#include "jiegou.h"
void zhuan(int z,char *pass)
{
	int i,n,j,zz,k;
	float je;
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
	printf("\n\n\n\t\t\t转帐业务\n");
	printf("\t\t\t━━━━━━━━━━━━━━━━\n\n");
	printf("\t\t\t转帐金额为百元的整数倍！\n\n");
	printf("\t\t\t请输入转帐编号:");
	scanf("%d",&zz);
	for(i=0;i<n;i++)
	{
		if(zz==b[i].id)
		{
			for(j=0;j<n;j++)
			{
				if(z==b[j].id)
				{
					for(k=0;k<3;k++)
					{
						printf("\t\t\t请输入转帐金额:");
						scanf("%f",&je);
						if((int)je%100==0&&b[j].money-je>=0)
						{
							b[j].money-=je;
							b[i].money+=je;
							printf("\n\t\t\t━━━━━━━━━━━━━━━━\n");
							printf("\n\t\t\t\t    转帐成功！\n\n");
							printf("\t\t\t\t   ┏━━━┓\n");
 							printf("\t\t\t\t   ┃ Enter┃\n");
							printf("\t\t\t\t   ┗━━━┛\n");
							getchar();
							getchar();
							break;
						}
					    if(b[j].money-je<0)
						{
							printf("\t\t\t余额不足!\n");
						}
					    if((int)je%100!=0)
						{
							printf("\t\t\t转帐金额不是100的整数倍!\n");
						}
					}
					if(k==3)
					{
							printf("\n\t\t\t━━━━━━━━━━━━━━━━\n");
							printf("\n\t\t\t\t    转帐失败！\n\n");
							printf("\t\t\t\t   ┏━━━┓\n");
 							printf("\t\t\t\t   ┃ Enter┃\n");
							printf("\t\t\t\t   ┗━━━┛\n");
							getchar();
							getchar();
							break;
					}
					break;
				}	
			}
		  	break;
		}
     
	}
	if(i==n)
	{
		printf("\n\t\t\t━━━━━━━━━━━━━━━━\n");
		printf("\n\t\t\t\t  编号输入错误！\n\n");
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
