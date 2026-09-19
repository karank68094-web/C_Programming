#include<stdio.h>

int main()
{
int n,negative=0,value,i;
printf("Enter N\n");
scanf("%d",&n);
printf("N=%d\n",n);

for(i;i<=n;i++)
{
	printf("Enter value\n");
	scanf("%d",&value);
	if(value<0)
	negative++;
	}
printf("negative=%d,non-negative=%d, total=%d\n ",negative,n-negative ,n);
return 0;
}
