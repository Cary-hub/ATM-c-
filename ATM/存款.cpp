#include<stdio.h>
#include<string.h>
#include"jiegou.h"
void cun(int z,char *pass)
{
    int i,n;
	float je;
	oth b[100];
	FILE *p,*p1;
	p1=fopen("jishu.txt","r");
	fscanf(p1,"%d",&n);
	fclose(p1);
	p=fopen("xinxi.txt","r");//��Ҫ��ȡ���ļ�
	for(i=0;i<n;i++)//���δ��ļ�����ע���˻�����Ϣ
	{
		fscanf(p,"%d%s%s%f%s%s%s%d",&b[i].id,b[i].name,b[i].pass,&b[i].money,b[i].sfz,b[i].tel,b[i].addr,&b[i].key);
	}
	fclose(p);//�ر��ļ�
	printf("\n\n\n\t\t\t���ҵ��\n");
	printf("\t\t\t��������������������������������\n\n");
	printf("\t\t\t�����Ϊ��Ԫ����������\n\n");
	printf("\t\t\t����������:");
	scanf("%f",&je);
	for(i=0;i<n;i++)
	{
		if((z==b[i].id)&&(strcmp(pass,b[i].pass)==0))
		{
			if((int)je%100==0)
				{
				b[i].money+=je;
				printf("\n\t\t\t��������������������������������\n");
				printf("\n\t\t\t\t    ���ɹ���\n\n");
				printf("\t\t\t\t   ����������\n");
 				printf("\t\t\t\t   �� Enter��\n");
				printf("\t\t\t\t   ����������\n");
				getchar();
				getchar();
				break;
				}
			else
			{
				printf("\n\t\t\t��������������������������������\n");
				printf("\n\t\t\t        ������������\n\n");
				printf("\t\t\t\t   ����������\n");
 				printf("\t\t\t\t   �� Enter��\n");
				printf("\t\t\t\t   ����������\n");
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


