#include<stdio.h>
#include<string.h>
#include"jiegou.h"
int yanzheng(int z,char *pass)
{
    int i,n;
	oth b;
	FILE *p,*p1;
	p1=fopen("jishu.txt","r");
	fscanf(p1,"%d",&n);
	fclose(p1);
	p=fopen("xinxi.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(p,"%d%s%s%f%s%s%s%d",&b.id,b.name,b.pass,&b.money,b.sfz,b.tel,b.addr,&b.key);
		if((z==b.id)&&(strcmp(pass,b.pass)==0))
		{
			if(b.key==0)
			{
				fclose(p);
				return(2);
			}
			else
			{
				fclose(p);
				return(1);
			}
		}

	}
	if(i==n)
	{
		fclose(p);
		return(0);
	}
}