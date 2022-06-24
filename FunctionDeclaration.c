/*What is function declaration?
--> As we already know When we declare a variable,we declare its 
	its properties to the compiler.
For example :	int var;
Properties:
1. Name of variable: var
2. Type of variable: int

Similarly,function declaration(also called function prototype)means
declaring the properties of a function to the compiler.

For example: int fun(int,char);

Properties:
1--> Name of function 			: fun
2--> Return type of function 	: int
3--> Number of parameters 1     : 2
4--> Type of parameters 1       : int
5--> Type of parameters 2		: char
*/
#include<stdio.h>
char fun(); //Function prototype
int main()
{
	char c=fun();
	printf("Character is : %c",c);
}
char fun()
{
	return 'a';
}

/*Is is always necessary to declare the function before using it?
=>Not necessary but it is preferred to declare before using it.



