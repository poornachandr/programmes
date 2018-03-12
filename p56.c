#include<stdio.h>
void main()
{
 int count=0,ch=0,i;
 char a[30]="love to code .123.";
 for(i=0;a[i]!='\0';i++)
 {
  if((a[i]>='0')&&(a[i]<='9'))
 {
  count++;
 }
 if(((a[i]>='a')||(a[i]<='z'))&&((a[i]>='A')||(a[i]<='Z')))
 {
  ch++;
 }
 }
 if((count>0)&&(ch>1))
 {
  printf("\n contains both alpha and numeric characters);
  }
  else
  {
   printf("\n does not ontains both alpha and numeric characters);
   }
  return 0;
}
