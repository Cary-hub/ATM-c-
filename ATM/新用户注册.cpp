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
	if((p1=fopen("jishu.txt","r"))!=NULL)//ֻ������ɾ
	{
		fscanf(p1,"%d",&n);
		fclose(p1);
	}
	n++;
	printf("\n\n\n\t\t\t����������ʾ���������Ϣ\n");
	printf("\t\t\t��������������������������������\n\n");
	printf("\t\t\t�û�������");
	scanf("%s",b.name);
	printf("\t\t\t���֤�ţ�");
	scanf("%s",b.sfz);
	printf("\t\t\t��ϵ�绰��");
	scanf("%s",b.tel);
	printf("\t\t\t��ͥסַ��");
	scanf("%s",b.addr);
	b.money=0;
	b.key=1;
	for(i=0;i<3;i++)
	{
		printf("\n\t\t\t��λ�û����룺");
		mima(pass);
		strcpy(b.pass,pass);
		printf("\n\t\t\t��������ȷ��:");
		mima(pa);
		if(strcmp(b.pass,pa)==0&&strlen(pass)==6&&strlen(pa)==6)
		{
			p1=fopen("jishu.txt","w");//ֻд��ɾ
			fprintf(p1,"%d",n);
			fclose(p1);
			p=fopen("xinxi.txt","a");//�ɶ�д����ɾ
			fprintf(p,"%d\t%s\t%s\t%.2f\t%s\t%s\t%s\t%d\n",b.id,b.name,b.pass,b.money,b.sfz,b.tel,b.addr,b.key);
			fclose(p);
			printf("\n\n\t\t\t��������������������������������\n\n");
			printf("\t\t\t�û�ע��ɹ���\n\n");
			printf("\t\t\t�����˺�Ϊ:%d\n\n",b.id);
			printf("\t\t\t\t   ����������\n");
 			printf("\t\t\t\t   �� Enter��\n");
			printf("\t\t\t\t   ����������\n");
			break;
		}
		else
		{
			printf("\n\n\t\t\t�������!\n");
		}
	}
	if(i==3)
	{
		printf("\n\t\t\t��������������������������������\n");
		printf("\n\t\t\t�û�����3���������ע��ʧ��\n\n");
	}
	getchar();
	getchar();
}

