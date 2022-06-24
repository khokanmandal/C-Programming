#include<stdio.h>
void f1(int a,int b)
{
	int c;
	c=a;
	a=b;//5
	b=c;//4
}
void f2(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;//6
	*b=c;//5
}
int main()
{
	int a=4,b=5,c=6;
	f1(a,b);
	f2(&b,&c);	
	printf("%d",c-a-b);//5-4-6
	return 0;
}