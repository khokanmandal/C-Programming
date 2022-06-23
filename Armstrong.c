#include<stdio.h>
int main()
{
	int number,count=0,result=0,mul=1,cnt,rem,q;
	printf("Enter number : ");
	scanf("%d",&number);
	q=number;
	while(q!=0)
	{
		q=q/10;
		count++;
	}
	q=number;
	cnt=count;
	while(q!=0)
	{
		rem=q%10;
		while(cnt!=0)
		{
			mul=mul*rem;
			cnt--;
		}
		result=result+mul;
		cnt=count;
		q=q/10;
		mul=1;
	}
	if(result==number)
		printf("%d is an Armstrong number",number);
	else
		printf("%d is not an Armstrong number",number);
	return 0;
}