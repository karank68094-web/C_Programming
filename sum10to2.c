#include<stdio.h>

int main()
{
	int i,n,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=10;i>=1;i--)
	printf("%dx%d=%d\n",n,i,i*n);
	return 0;
}
