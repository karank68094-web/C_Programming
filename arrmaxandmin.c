#include<stdio.h>
int main()

{
	int i;
	int a[]={11,22,33,11,66,77,55,76};
	
	int max=a[0],min=a[0];
	int n=sizeof(a)/sizeof(int);
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	
	printf("max=%d, min=%d\n",max,min);
	
	return 0;
}
