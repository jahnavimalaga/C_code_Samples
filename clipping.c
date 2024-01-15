#include<stdio.h>
int
int main()
{
	int p[4],q[4],xmin=100,ymin=100,xmax=250,ymax=200,x1=150,y1=150,x2=150,y2=250;
	p[0]=x1-x2;q[0]=x1-xmin;
	p[1]=-p[0];q[1]=xmax-x1;
	p[2]=y1-y2;q[2]=y1-ymin;
	p[3]=-p[2];q[3]=ymax-y1;
	if(p[0]==0)
	{
		if(q[0]<0||q[1]<0)
		  printf("the line is ouside the rectangle");
	    else
	    {
	       if(q[2]<0)
	         y1=ymin;
	       if((ymax-y2)<0)
	          y2=ymax;
	    	printf("x1,y1:%d %d\n",x1,y1);
	    	printf("x2,y2:%d %d\n",x2,y2);
		}
	
	} 
	
	if(p[3]==0)
	{
		if(q[2]<0||q[3]<0)
		  printf("the line is ouside the rectangle");
	    else
	    {
	       if(q[1]<0)
	         x1=xmin;
	       if((xmax-x2)<0)
	          x2=xmax;
	        printf("x1,y1:%d %d\n",x1,y1);
	    	printf("x2,y2:%d %d\n",x2,y2);   
		}
	} 
	
}
