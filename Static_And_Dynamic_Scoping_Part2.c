/*
Q. Why Scoping?
=> Scoping is necessary if we want to reuse variables names.
Q. What is static scoping?
=> In static scoping (or lexical scoping),definition of a variable
   is resolved by searching its containing block or function.If that
   fails,then searching the outer containing block and so on.

Example:-
int a=10,b=20;
int fun()
{
	int a=5;
	{
		int c;
		c=b/a;
		printf("%d",c);//4
	}
}
*/
#include<stdio.h>
int fun1(int);
int fun2(int);
int a=5;
int main()
{
	int a=10;
	a=fun1(a);
	printf("%d",a);
}
int fun1(int b)
{
	b=b+10;
	b=fun2(b);
	return b;
}
int fun2(int b)
{
	int c;
	c=a+b;
	return c;
}
//Output : 25