#include<stdio.h>
int main()
{
 int num,count=0;
 printf("\nEnter a number");
 scanf("%d",&num);
 while(num!=0)
 {
  num/=10;
  count++;
 }
 printf("\n No of digits is %d",count);
 return 0;
 }
