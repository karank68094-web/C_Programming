#include<stdio.h>
int main()
{
int i,a[]={11,22,33,11,66,77,55,76};
int n=sizeof(a)/sizeof(int);
int max=a[1],min=a[1];
for(i=1;i<=n-1;i++)
{
	if(a[i]>max)
	max=a[i];
	if(a[i]<min)
	min=a[i];
	}
	printf("max=%d, min=%d\n",max,min);	
}
