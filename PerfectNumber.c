/*What is a perfect number?
Perfect number is a positive integer that is equal to the sum of all it's proper
positive divisors excluding the number itself.

For example: 6 is a perfect number
--> Because the proper positive divisors of 6 are 1,2 and 3 (Excluding 6)
-->and sum of all its positive divisors i.e 1+2+3=6
*/
#include<stdio.h>
int main()
{
	int number,i,rem,sum=0;
	printf("Enter number : ");
	scanf("%d",&number);
	for(i=1;i<number;i++)
	{
		rem=number%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	if(sum==number)
		printf("%d is a perfect number",number);
	else
		printf("%d is a perfect number",number);
	return 0;
}
