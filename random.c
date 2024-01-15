#include<stdio.h>
#include<stdlib.h>

int ran(n,x,y)
{
	int a=7,zk=1,i=0;//m=y-x
	//printf ("the value of m: %d\n\n",M);
	
	for(i;i<n;i++)
	{	
	    
		zk=((a*zk)%11);
		
		printf ("\t%d",zk+x);
		printf("\n");
		
	}	
}
int main()
{ 
  int x,y,n,p=5,i=0;
  time_t t;
  printf ("random no to be generated b/t (x,y):");
  scanf("%d%d",&x,&y);
  printf("how many rand no are to be generated in the given range i.e n:");
  scanf("%d",&n);
  printf("\nthe generated random variables are:\n");
  //ran(n,x,y);
  //srand((unsigned)time(&t));
  //printf("%d\n",rand()%10);
  for (i;i<p;i++)
 {
  	//printf ("hi");
  printf("%d\n",(rand()%20)+x);  
 }
  return 0;
}
