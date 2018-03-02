#include<stdio.h>
int main()
{
 int n[50],i,count=0,l;
 printf("\n enter a number");
 scanf("%d",&n);
 l=strlen(n);
 for(i=0;n[i]<=l;i++)
 {
  if((n[i]=='0')&&(n[i]=='1'))
  {
   count++;
  }
 }
 if(count==l)
 {
  printf("the number is binary");
 }
 else
 {
  printf("\n not a binary");
 }
 return 0;
 }


