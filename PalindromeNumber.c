#include<stdio.h>
int main()
{
	int n,result=0,q,rem; 
	printf("Please Enter The Number : ");
	scanf("%d",&n);
	q=n;
	while(q!=0)
	{
		rem=q%10;
		result=result*10+rem;
		q=q/10;
	}
	if(result==n)
		printf("It\'s a plaindrome");
	else
		printf("It isn\'t palindrome");
	return 0;
}