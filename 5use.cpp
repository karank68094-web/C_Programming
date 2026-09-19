#include <stdio.h>

int main()
 {
    printf("Enter N");
    int i,sum=0,n,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            sum+=x;
        }
    printf("Sum = %d Avg=%f",sum,sum/(float)n);

    return 0;
}
