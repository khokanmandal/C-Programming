/*				Types of recursion
(1) Direct recursion
(2) Indirect recursion
(3) Tail recursion
(4) Non-tail recursion

(1) Direct recursion :-
A function is called direct recursive if it calls the same function again.

Structure of direct recursion :-

	fun()
	{
		//Some code
		fun();
		//some code
    }
    
(2) Indirect recursion :-
A function (let say fun) is called indirect recursive if it calls another
function (let say fun2) and then fun2 calls fun directly or indirectly.

Structure of direct recursion :-

	fun()
	{
		//Some code
		fun2();
		//some code
    }
	fun2()
	{
		//Some code
		fun();
		//some code
    }
*/
// Program to understand indirect recursion
/* WAP to print numbers from 1 to 10 in such a way that when number is odd , add 1
   and when number is even,subtract 1.
   O/P--> 2 1 4 3 6 5 8 7 10 9
*/ 
#include<stdio.h>
 void odd();
 void even();
 int n=1;
 
 void odd()
 {
 	if(n<=10)
   {
 		printf("%d ",n+1);
 		n++;
 		even();
    }
    return;
}
void even()
 {
 	if(n<=10)
   {
 		printf("%d ",n-1);
 		n++;
 		odd();
    }
    return;
}
int main()
{
	odd();
}
