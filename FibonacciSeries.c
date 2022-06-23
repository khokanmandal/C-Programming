#include<stdio.h>
int main()
{
	int n,i,a=0,b=1,res;
	printf("Enter the number of terms you want: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		res=a+b;
		a=b;
		b=res;
	}
	return 0;
}
