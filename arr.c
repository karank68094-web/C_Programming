#include<stdio.h>
int main()
{
	int i, arr[]={1,2,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(int);
	for(i=0;i<=(n-1);i++)
	{
		printf("%d,",arr[i]);
	}
	return 0;
}
