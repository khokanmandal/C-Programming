/*					***Recursion***
>> Recursion is a process in which a function calls itself directly or indirectly.
For example,
	int fun()
	{
		...
		fun();
	}
*/
#include<stdio.h>
int fun(int n)
{
	if(n==1)
		return 1;
	else
		return 1+fun(n-1);
}
int main()
{
	int n=3;
	printf("%d",fun(n));
	return 0;
	
}

/*								  =3=
								fun(3)
								  |
							return 1 + fun(2)
							      |
							return 1 + fun(1)
							      |
							      1 
*/