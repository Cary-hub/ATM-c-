#include<stdio.h>
#include<stdlib.h>
int zucaidan()
{
    int n;
	
	printf("\n\n\t\t欢  迎  使  用  ATM  自  动  提  款  机\n");
	printf("\t\t┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅\n");
	printf("\n");
	printf("\t\t新用户开户\n");
	printf("\t\t┅┅┅┅┅┅①\n");
	printf("\t\t用户登录\n");
	printf("\t\t┅┅┅┅┅┅②\n");
	printf("\t\t管理员注册\n");
    printf("\t\t┅┅┅┅┅┅③\n");
    printf("\t\t管理员登录\n");
    printf("\t\t┅┅┅┅┅┅④\n");
    printf("\t\t退出系统\n");
    printf("\t\t┅┅┅┅┅┅⑤\n");
    printf("\t\t请您选择：");
	scanf("%d",&n);
    system("cls");//清屏
	return(n);
}