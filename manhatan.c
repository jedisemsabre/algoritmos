#include<stdio.h>


int main(void)

{

	int x,y,xm,ym,xr,yr,tot;


	scanf("%d %d %d %d",&xm,&ym,&xr,&yr);


	y= (yr - ym);
 
	x = (xr - xm);

 
	if(y<0)

	{
 
		y= y*(-1);
	}

 
	if(x<0)
	{

	        x = x*(-1);

   	}

 
	tot=y+x;
	printf("%d\n",tot);


    	return 0;

}