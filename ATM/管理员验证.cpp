#include <stdio.h>
#include <string.h>
int yanzheng_gly(int id,char *pass)
{
	struct oth
	{
		int id1;
		char pass1[20];
	};
	oth th[50];
	int i,n;
	
FILE *p_gly,*p1_gly;
	p1_gly=fopen("jishu_gl.txt","r");
	fscanf(p1_gly,"%d",&n);
	fclose(p1_gly);
	p_gly=fopen("xinxi_gl.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(p_gly,"%d%s",&th[i].id1,th[i].pass1);
		if((id==th[i].id1)&&(strcmp(pass,th[i].pass1)==0))
		{
			fclose(p_gly);
			return(1);
		}
	}
	if(i==n)
	{
		fclose(p_gly);
		return(0);
	}
}