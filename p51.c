#include<stdio.h>
int main()
{
 int num,n1,n2,n3;
 printf("\n enter a number:");
 scanf("%d",&num);
   n3=num%10;
   num=num/10;
   n2=num%10;
   num=num/10;
   n1=num%10;
   printf("%d\t%d\t%d",n1,n2,n3);
  return 0;
} 
 
 
