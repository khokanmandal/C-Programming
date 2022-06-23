/* Definition of function : Function is basically a set of statements that takes inputs
							perform some computation and produces output.
							
   Syntax: Return_type function_name(set_of_inputs);
   
   Return type  	: Type of output returned by the function
   Function name	: Name of the function
   Set of inputs	: Inputs provided to the function (It is not neccessary)
 */
 
#include<stdio.h>
int areaOfRect(int length,int breadth)
{
	int area;
	area=length*breadth;
	return area;
}
int main()
{
	int l=10,b=5;
	int area=areaOfRect(l,b);
	printf("%d\n",area);
}   
/*  Why Function?
   There are two important reasons of why we are using functions:
   1-->Reusability :
   Once the function is defined,it can be reused over and over again.
   
   2-->Abstraction :
   If you are just using the function in your program then you don't have to worry 
   about how it works inside!
   Example : scanf() function .etc
   
*/