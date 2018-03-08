#include <stdio.h>
#include<math.h>

int main()
{
int a,b,d;

printf("enter the numbers");
scanf("%d%d",&a,&b);
if(a>=1&&a<=5&&b>=5&&b<=50)
{
d=pow(a,b);
}
printf("answers is %d",d);
return 0;
}



