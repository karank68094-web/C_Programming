#include<stdio.h>

int main()
{
	int n,i=1;
	int fact=1;
	
	printf("Enter the numbmer");
	scanf("%d",&n);
	
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
	return 0;
}
