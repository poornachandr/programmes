#include<stdio.h>
int main()
{
 int num,i=1,power=1;
 printf("\n enter a number");
 scanf("%d",&num);
  while(i<=num/2)
  {
   power=power*2;
   if(power==num)
   {
    printf("\n yes");
   }
   i++;
  }
   
     return 0;
    } 
