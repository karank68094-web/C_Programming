#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);

	printf("1.add\n");
	printf("2.subtaact\n");
	printf("3.multipluy\n");
	printf("4.divide\n");
	
	printf("Enter choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("%d",a+b);
		break;
		 case2:
		printf("%d",a-b);
		break;
		
		case 3:
			printf("%d",a*b);
			break;
			
			case 4:
	printf("%d",a/b);
				break;
				
				default:
					printf("invalid choice");
					
	}

	return 0;
	
}
