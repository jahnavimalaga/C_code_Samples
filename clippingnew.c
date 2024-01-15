#include<stdio.h>
int fun(int p[4],int q[4],int xmin,int ymin,int xmax,int ymax,int*x1,int*y1,int*x2,int*y2)
{
	if(p[0]==0)
	{
		if(q[0]<0||q[1]<0)
		  printf("the line is ouside the rectangle");
	    else
	    {
	       if(q[2]<0)
	         *y1=ymin;
	       if((ymax-*y2)<0)
	          *y2=ymax;
	    		printf("x1,y1:%d %d\nx2,y2:%d %d",*x1,*y1,*x2,*y2);
		}
	} 
	
	if(p[3]==0)
	{
		if(q[2]<0||q[3]<0)
		  printf("the line is ouside the rectangle\n");
	    else
	    {
	       if(q[1]<0)
	         *x1=xmin;
	       if((xmax-*x2)<0)
	          *x2=xmax;
	        printf("x1,y1:%d %d\nx2,y2:%d %d",*x1,*y1,*x2,*y2);
		}
	} 
}
int main()
{
	int p[4],q[4],xmin=100,ymin=100,xmax=250,ymax=200,x1,y1,x2,y2;
	printf("give the values of x1,y1 and x2,y2 (small->big):");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	p[0]=x1-x2;q[0]=x1-xmin;
	p[1]=-p[0];q[1]=xmax-x1;
	p[2]=y1-y2;q[2]=y1-ymin;
	p[3]=-p[2];q[3]=ymax-y1;
	fun(p,q,xmin,ymin,xmax,ymax,&x1,&y1,&x2,&y2);
	printf("the values of x1 y1, x2 y2 after executing the fun is\n");
	printf("x1,y1:%d %d\nx2,y2:%d %d",x1,y1,x2,y2);
	
}
