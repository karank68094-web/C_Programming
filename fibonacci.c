#include <stdio.h>
int main()
{
	int sum=1;
int i,a=0,b=1,c,n=10;
printf("%d,%d,",a,b);
for(i=3;i<=n;i++)
{
    c=a+b;
    a=b;
    b=c;
    sum=sum+c;
    printf("%d,",c);
    
}
printf("\n%d,",sum);
;
return 0;
}
