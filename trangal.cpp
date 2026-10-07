#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter there ");
    scanf("%d %d %d",&a,&b,&c);
    float s=(a+b+c)/2.0;
   
   float area=s*(s-a)*(s-b)*(s-c);
    area=sqrt(area);
    printf("%f",area);


    return 0;
}
