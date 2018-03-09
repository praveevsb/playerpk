#include <stdio.h>

int main()
{
     int num,i;long int sum=1;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum*i;
    }
    printf("factorial is %d",sum);

    return 0;
}
