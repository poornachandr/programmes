#include<stdio.h>
int main()
{
 int n,i,result=1,count=0;
 printf("\n enter a number");
 scanf("%d",&n);
 while(n!=1)
 {
  n=n/2;
  count++;
 for(i=0;i<count+1;i++)
 {
  result=result*2;
  }
  }
  printf("%d",result);
 return 0;
}
  
