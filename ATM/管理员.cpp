#include <stdio.h>
#include <string.h>
int guanliyuancaidan();
void xxcx();////?
void dongjie();
void jiedong();
void zhuxiao();
void mima(char *pass);
int yanzheng_gly(int id,char *pass);//?
void guanli()
{
	char pass[20];
	int i,id,a,b;
	printf("\n\n\n\t\t\t�� �� �� Ա �� �� �� �� �� Ϣ\n");
	printf("\t\t\t��������������������������������\n\n");
	for(i=0;i<3;i++)
	{
		printf("\t\t\t����Ա�˺�:");
		scanf("%d",&id);
		printf("\t\t\t����Ա����:");
		mima(pass);
		a=yanzheng_gly(id,pass);
		if(a==1)
		{
			do{
				b=guanliyuancaidan();				
				switch(b)
				{
				case 1:
					xxcx();
					break;
				case 2:
					dongjie();
					break;
				case 3:
					jiedong();
					break;
				case 4:
					zhuxiao();
					break;
				case 5:
					break;
				}
			}while(b!=5);
			break;
		}
		else
		{
			printf("\n\n\t\t\t�������\n\n");
		}
	}
	if(i==3)
	{
		printf("\t\t\t��������������������������������\n");
		printf("\n\t\t\t���޷�����!\n");
		getchar();
		getchar();
	}		
}