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
	printf("\n\n\n\t\t\t����������ʾ���������Ϣ\n");
	printf("\t\t\t��������������������������������\n\n");
	printf("\t\t\t���������Աע�����:");
	scanf("%d",&key);
	printf("\n");
	if(key==123)
	{
		
		for(i=0;i<3;i++)
		{
			printf("\t\t\t���������Ա����:");
			mima(pass);
			printf("\n");
			printf("\t\t\t�����ٴ�����ȷ��:");
			mima(pa);
			if(strcmp(pass,pa)==0)
			{  
				p1_gl=fopen("jishu_gl.txt","w");
				fprintf(p1_gl,"%d",id);
				fclose(p1_gl);
				p_gl=fopen("xinxi_gl.txt","a");
				fprintf(p_gl,"%d\t%s\n",id,pass);
				fclose(p_gl);
				printf("\n\n\t\t\t��������������������������������\n\n");
				printf("\t\t\t���Ĺ���Ա�˺���:%d\n",id);
				printf("\n\t\t\t��������������������������������\n\n");
				printf("\t\t\t����Աע��ɹ���\n\n");
				printf("\t\t\t\t   ����������\n");
				printf("\t\t\t\t   �� Enter��\n");
				printf("\t\t\t\t   ����������\n");
				getchar();
				getchar();
				break;
			}
			else
			{
				printf("\n\n\t\t\t�����������!\n\n");
			}
		}
		if(i==3)
		{
			printf("\t\t\t��������������������������������\n");
			printf("\n\t\t\t����3���������ע��ʧ��\n\n");
			getchar();
			getchar();
		}
	}
	else
	{
		printf("\t\t\t��������������������������������\n");
		printf("\n\t\t\t�����������,����Ȩע�����Ա!\n");
		getchar();
		getchar();
	}
}
