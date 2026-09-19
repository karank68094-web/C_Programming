#include<stdio.h>
int main ()

{
	int n,i,marks;
int	pass=0,fail=0;
	printf("Enter  Marks Number");
	scanf("%d",&n);
	printf("   you Enter=%d \n",n);
	for(i=1;i<=n;i++)
	
	{
	

	scanf("%d",&marks);
	if(marks<50)
	  {
	    printf("%d fail\n",marks);
	   fail++;
}
else
{

	   
	   printf("%d pass\n",marks);pass++;
	   
	  
	}
}
printf("%d is pass, %d fail and total is %d\n",pass,fail,n);
	
return 0;
}
