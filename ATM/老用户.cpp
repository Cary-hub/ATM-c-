#include<stdio.h>
void mima(char *pass);
int laoyonghucaidan();
int yanzheng(int z,char *pass);
void cun(int z,char *pass);
void dongjie(int z);
void qu(int z,char *pass);
void cha(int z,char *pass);
void zhuan(int z,char *pass);
void xiugai(int z,char *pass);
void guashi();
void laoyonghu()

{
    
	char pass[20];
     int i,z,a,b;
	
    printf("\n\n\n\t\t\t����������ʾ���������Ϣ\n");
	printf("\t\t\t��������������������������������\n\n");
	for(i=0;i<3;i++)
	{
		printf("\t\t\t�����������˺�:");
		scanf("%d",&z);
		printf("\t\t\t��������λ����:");
		mima(pass);
		a=yanzheng(z,pass);
		if(a==1)
		{
			do{
				b=laoyonghucaidan();				
				switch(b)
				{
				case 1:
					cun(z,pass);
					break;
				case 2:
					qu(z,pass);
					break;
				case 3:
					cha(z,pass);
					break;
				case 4:
					zhuan(z,pass);
					break;
				case 5:
					xiugai(z,pass);
					break;
				case 6:
					guashi();
					break;
				case 7:
					break;
				}
			}while(b!=7);
			break;
		}
		if(a==0)
		{
			if(i<2)
			printf("\n\n\t\t\t�������\n\n");
		}
		if(a==2)
		{
			printf("\n\n\t\t\t��������������������������������\n\n");
			printf("\t\t\t�����˻��ѱ����ᣬ�������Ա��ϵ��\n");
			getchar();
			getchar();
			break;
		}
	}
	if(i==3)//�������볬�����ξͶ����˻�
	{
		dongjie(z);
	}
}