#include<stdio.h>
int main()
{
int s,p;
printf("enter the elment:");
scanf("%d%d",&s,&p);
s^=p;
p^=s;
s^=p;
printf("the sorted element is %d and %d ",s,p);
return 0;
}
