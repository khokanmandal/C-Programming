//Program to add two numbers without a plus operator
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two numbers you want to add: ");
	scanf("%d %d",&num1,&num2);
	while(num2!=0)
	{
		num1++;
		num2--;
	}
	printf("Sum of two values is %d",num1);
	return 0;
}