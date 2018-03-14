#include<stdio.h>
int main()
{
 int num,i,count=0;
 printf("/n enter the number");
 scanrf("%d",&num);
 for(i=1;1<=num;i++)
 {
  if(num%i==0)
  {
   count++;
  }
  if(count==2)
  {
   printf("/n not a composite number");
  }
  else
  {
   printf("/n composite number");
  }
 }
 return 0;
} 
