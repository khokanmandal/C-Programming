/*
-->Stack is a container (or memory segment)which holds some data.
-->Data is retrieved in Last In First Out(LIFO)fashion.
-->Two operations : PUSH and POP

Activation Record :- It is a portion of a stack which is generally composed of:-
	1. Locals of the calle.
	2. Return address to the caller.
	3. Parameters of the calle.
*/
#include<stdio.h>
int main()
{	
	int a=10;
	a=fun1(a);
	printf("%d",a);
}
int fun1(int a)
{
	int b=5;
	b=b+a;
	return b;
}