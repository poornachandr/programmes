#include<stdio.h>
int main()
{
 int n1,n2,n3,p,m;
 printf("\n enter a,b,c");
 scanf("%d%d%d",&n1,&n2,&n3);
 p=n1*n2;
 m=p%n3;
 printf("\n ans is %d",m);
 return 0;
 }
