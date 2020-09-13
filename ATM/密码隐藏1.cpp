#include<stdio.h>
#include<string.h>
#include<conio.h>//getch函数头文件
#include<stdlib.h>
void mima(char *pass)
{
    int i=0;
	char ch;
	while(1)
	{
		ch=getch();//将字符打在内存里,不在屏上显示
		
		if(i==6)//密码不超过6位
		{
			pass[i]='\0';
			break;
		}


	    else if(ch==8)//支持退格删除
		{
			if(i>0)
			{
			printf("\b \b");
			i--;
			}
		}
		else if(ch==13)//密码不足六位时回车
		{
            i=0;
			break;
		}

		else //输入正常
		{
			pass[i]=ch;
			pass[i+1]='\0';
			printf("*");
			i++;
		}
	}  
}
