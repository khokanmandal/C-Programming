//Adding Two Numbers Without Using The Plus Operator(Half Adder Method)
#include<stdio.h>
int main()
{
	int num1,num2,sum,carry;
	printf("Enter two numbers : ");
	scanf("%d %d",&num1,&num2);
	
	while(num2!=0)
	{
		sum=num1^num2;
		carry=(num1&num2)<<1;
		num1=sum;
		num2=carry;
	}
	printf("The sum of two numbers is : %d",sum);
}