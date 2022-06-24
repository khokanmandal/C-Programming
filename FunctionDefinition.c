/*
Q. What is function definition?
=> Function definition consists of block of code which
   is capable of performing some specific task.
*/
//For example :
	
#include<stdio.h>
int add(int,int);//There is no need to mention names of the parameters.
int main()
{
	int num1,num2,sum;
	printf("Enter two number : ");
	scanf("%d %d",&num1,&num2);
	sum=add(num1,num2); // Arguments or Actual Parameters.
	printf("Sum is %d",sum);
	return 0;
}
int add(int a,int b)//Parameters or Formal Parameters.
{
	return (a+b);
}
/* Note: 
		--> While calling a function,you should not mention the return type
		    of the function.	
		--> Also you should not mention the data types of the arguments.
*/

/*What is the difference between an argument and a parameter?
=>
   Parameter: Parameter is a variable in the declaration and definition of the function.
   Argument : Is the actual value of the parameter that gets passed to the function.
   
   Note: Parameter is also called as Formal Parameter and
   		 Argument is also called as Actual Parameter.
*/