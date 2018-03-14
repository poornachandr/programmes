#include<stdio.h>
int main()
{
 int n1,n2,pro,psq;
 printf("\n enter two numbers");
 scanf("%d%d",&n1,&n2);
 pro=n1*n2;
 printf("\n the product is %d",pro);
 if(pro/n1==n1)
 {
  printf("\n %d is a perfect square",pro);
 }
 else
 {
  printf("\n Not a perfect square");
 }
 retturn 0;
}
 
