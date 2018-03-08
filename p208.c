#include <stdio.h>
#include<math.h>

int main()
{
int a,b,c,d;
printf("enter the numbers");
scanf("%d%d%d",&a,&b,&c);
d=pow(a,b);
printf("answers is %d",d%c);
return 0;
}
