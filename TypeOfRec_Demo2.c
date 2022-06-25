/*Tail Recursive : A recursive function is said to be tail recursive if the recursive call
				   if the recursive call is the last thing done by the function.There is 
				   no need to keep record of the previous state.
*/
//Example of tail recursive function
/*#include<stdio.h>
void fun(int n)
{
	if(n==0)
		return;
	else
		printf("%d ",n);
	return fun(n-1);
}
int main(){
	fun(3);
	return 0;
}
*/
/*Non-Tail Recursive : A recursive function is said to be non-tail recursive if the recursive call
				       is not the last thing done by the function.After returning back,there is some
					   something left to evaluate.
*/
//Example of non-tail recursive function
#include<stdio.h>
void fun(int n)
{
	if(n==0)
		return;
    fun(n-1);
	printf("%d ",n);
}
int main(){
	fun(3);
	return 0;
}
