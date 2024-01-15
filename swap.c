#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a value=%d\n",a);
	printf("b value=%d\n",b);
	
}
