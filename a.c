#include<stdio.h>
void fun(int a[2])
{
	a[0]=3;
	a[1]=4;
}
void main()
{
	int a[2]={0,1};
	fun(a);
	printf("a,b:%d %d",a[0],a[1]);
	
	
}
