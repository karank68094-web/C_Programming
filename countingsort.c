#include<stdio.h>
int main()
{
	int i,t,a[]={8,7,4,1,0,5,9,2},
	 b[]={0,0,0,0,0,0,0,0,0,0},
	 j,k=0;
	for(i=0;i<8;i++)
	printf("%d,",a[i]);
	printf("\n\n");
	for(i=0;i<8;i++)
	{t=a[i];
	b[t]=b[t]+1;
	}
//	printf("%d,",b[i]);
	printf("\n\n");
	for(i=0;i<10;i++)
	{
	if(b[i]==0)
	continue;
	t=b[i];
	for(j=0;j<t;j++)
	{a[k]=i;
	k++;
		}	
	}
	for(i=0;i<8;i++)
	printf("%d,",a[i]);
	printf("\n\n");
	/*time comeplexity 3n*/
	return(0);
}
