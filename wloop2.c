#include<stdio.h>
int main ()
{
	int i=10,n;
	printf("Enter the number");
	scanf("%d",&n);
	while(i>=1){
	
	printf("%4d\tx %4d\t=%4d \n",n,i,n*i);
    i--;
}
	return 0;
}
