#include <stdio.h>
#include <string.h>
#include "jiegou.h"
void xxcx()
{
	int i,n,id;
	oth b[100];
FILE *p,*p1;
	printf("\n\n\n\t\t\t��Ϣ��ѯ\n");
	printf("\t\t\t��������������������������������\n\n");
	printf("\t\t\t�������û��˺�:");
	scanf("%d",&id);
	p1=fopen("jishu.txt","r");
	fscanf(p1,"%d",&n);
	fclose(p1);
	p=fopen("xinxi.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(p,"%d%s%s%f%s%s%s%d",&b[i].id,b[i].name,b[i].pass,&b[i].money,b[i].sfz,b[i].tel,b[i].addr,&b[i].key);
		if(id==b[i].id)
		{
			printf("\n\t\t\t��������������������������������\n\n");
			printf("\t\t\t�û�����:%s\n\n",b[i].name);
			printf("\t\t\t���֤��:%s\n\n",b[i].sfz);
			printf("\t\t\t��ϵ�绰:%s\n\n",b[i].tel);
			printf("\t\t\t��ͥסַ:%s\n\n",b[i].addr);
			printf("\t\t\t�û����:%.2f\n\n",b[i].money);
			if(b[i].key==1)
			{
			printf("\t\t\t�˻�״̬: ����\n");
			}
			else
			{
				printf("\t\t\t�˻�״̬: ����\n");
			}
			printf("\n\t\t\t��������������������������������\n\n");
			printf("\t\t\t\t   ����������\n");
 			printf("\t\t\t\t   �� Enter��\n");
			printf("\t\t\t\t   ����������\n");
			fclose(p);
			getchar();
			getchar();
			break;
		}
	}
	if(i==n)
	{
		printf("\n\t\t\t��������������������������������\n");
		printf("\n\t\t\t\t  �˺��������\n\n");
		printf("\t\t\t\t   ����������\n");
 		printf("\t\t\t\t   �� Enter��\n");
		printf("\t\t\t\t   ����������\n");
		fclose(p);
		getchar();
		getchar();
	}
}
