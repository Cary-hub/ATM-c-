#include<stdio.h>
#include<stdlib.h>
void ksjm();
void jie();
int zucaidan();
void xin();
void laoyonghu();
void guanli();
void zhuce_gly();
void main()
{
	int a;
	
	ksjm();
	do
	{
	   system("cls");
	   a=zucaidan();
	   switch(a)
	   {
	   case 1:
		   xin();
		   break;
       case 2:
		   laoyonghu();
		    break;
	   case 3:
		   zhuce_gly();
		   break;
	   case 4:
		  guanli();
		   break;
	   case 5:
		   break;
	   
	   }
	  
	}while(a!=5);
	   
	   jie(); 
	   
	   
	   
}	   
	   
	   
	   
	   
	   






















