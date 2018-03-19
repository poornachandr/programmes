##include <stdio.h>

int main() 
{
		int num,temp,rem=0,i;
    printf("Enter the number");
    scanf("%d",&num);
		while(num!=0)
		{
			temp=num%10;
			rem=(rem*10)+temp;
			num/=10;
		}
		while(rem!=0)
		{
			i=rem%10;
			rem=rem/10;
		    if(i%2!=0)
		    {
		        printf("%d\n",i);
		    }
			
			}
      return 0;
}
