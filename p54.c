#include <stdio.h>
#include<string.h>
int main()
{
   char ch[100],hc[100];
   int i,m,n,count=0;
   printf("enter the frst string");
   scanf("%s",ch);
   printf("enter the second string");
   scanf("%s",hc);
   m=strlen(ch);
   n=strlen(hc);
   for(i=0;ch[i]!='\0'&&hc[i]!='\0';i++)
   {
       if(ch[i]==hc[i]){
       count++;
   }}
   if(count==m&&count==n)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
    return 0;
}



