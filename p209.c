#include <stdio.h>
#include<math.h>

int main()
{
int a,b,d;
long int c;
printf("enter the numbers");
scanf("%d%d%ld",&a,&b,&c);
d=pow(a,b);
printf("answers is %d",d%c);
return 0;
}



