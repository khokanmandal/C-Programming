#include<stdio.h>
int main()
{
	int q,rem,number,fact=1,result=0,i;
	printf("Enter number : ");
	scanf("%d",&number);
	q=number;
	while(q!=0)
	{
		rem=q%10;
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		result=result+fact;
		fact=1;
		q/=10;
	}
	if(number==result)
		printf("%d is an Strong number",number);
	else
		printf("%d is not an Strong number",number);
	return 0;
}