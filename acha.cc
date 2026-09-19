#include<stdio.h>

int main()
{
    int n,i,marks[100];
    int pass=0,fail=0;

    printf("Enter Marks Number: ");
    scanf("%d",&n);

    printf("You Enter=%d\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);

        if(marks[i]<50)
        {
            fail++;
        }
        else
        {
            pass++;
        }
    }

    for(i=0;i<n;i++)
    {
        if(marks[i]>=50)
        {
            printf("%d pass\n",marks[i]);
        }
    }

    for(i=0;i<n;i++)
    {
        if(marks[i]<50)
        {
            printf("%d fail\n",marks[i]);
        }
    }

    printf("%d is pass, %d fail and total is %d\n",pass,fail,n);

    return 0;
}
