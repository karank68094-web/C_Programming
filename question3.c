#include <stdio.h>

int main()
{
int n,sum=0,x,i;
printf("Enter N\n");
scanf("%d",&n);
printf("You entered %d\n",n);
for(i=1;i<=n;i++)
{
    printf("Enter value");
    scanf("%d",&x);
    sum+=x;
}
printf("\n Sum=%d, Avg=%0.2f",sum,sum/(float)n);
return 0;
}
