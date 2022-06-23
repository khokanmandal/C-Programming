#include<stdio.h>
int main()
{
	int rows,n,i,j;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	n=1;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
	return 0;
}