#include<stdio.h>
#include<string.h>
#include<conio.h>//getch����ͷ�ļ�
#include<stdlib.h>
void mima(char *pass)
{
    int i=0;
	char ch;
	while(1)
	{
		ch=getch();//���ַ������ڴ���,����������ʾ
		
		if(i==6)//���벻����6λ
		{
			pass[i]='\0';
			break;
		}


	    else if(ch==8)//֧���˸�ɾ��
		{
			if(i>0)
			{
			printf("\b \b");
			i--;
			}
		}
		else if(ch==13)//���벻����λʱ�س�
		{
            i=0;
			break;
		}

		else //��������
		{
			pass[i]=ch;
			pass[i+1]='\0';
			printf("*");
			i++;
		}
	}  
}
