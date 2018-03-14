#include<stdio.h>
int main()
{
 int n1,n2,pro,i,psq=0;
 printf("\n enter the two numbers");
 scanf("%d%d",&n1,&n2);
 pro=n1*n2;
 printf("\n product is %d",pro);
 for(i=1;i<=pro;i++)
 {
  if(pro=i*i)
  {
   psq=1;
   }
  }
  if(psq==1)
  {
   printf("\n %d is a perfect square",pro);
   }
   else
   {
   printf("\n not a perfect square");
   }
   return 0;
  } 
