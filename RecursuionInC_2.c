/*
(1) Divide the problem into smaller sub-problems.
(2) Specify the base condition to stop the recursion.
*/
//Q.Problem: Calculate the factorial of a number.
int Fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*Fact(n-1);
}
#include<stdio.h>
int main()
{	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	printf("Factorial of a number %d is %d",num,Fact(num));
	return 0;
}




/* 				***Basic Structure***

	Fact()
	{
		if()
		{
			...    //Base Case  (2)
    	}
    	else
    	{
    		...		//Recursive Procedure  (1)
		}
	}

*/


/*
Example-->>
		calculate Fact(4)
Fact(1)= 1
Fact(2)= 2 * 1 			=  2*Fact(1)
Fact(3)= 3 * 2 * 1		=  3*Fact(2)
Fact(4)= 4 * 3 * 2 * 1  =  4*Fact(3)


Base condition: Base condition is the one which doesn't require to call the
				same function again and it helps in stopping the recursion.
*/