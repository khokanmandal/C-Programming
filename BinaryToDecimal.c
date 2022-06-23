#include<stdio.h>
int main()
{
	int binary,decimal=0,weight=1,rem;
	printf("Enter the binary number : ");
	scanf("%d",&binary);
	
	while(binary!=0)
	{
		rem=binary%10;
		decimal=decimal+rem*weight;
		binary=binary/10;
		weight=weight*2;
	}
	printf("Decimal Number Is : %d",decimal);
	return 0;
}