#include<stdio.h>
int main()
{
  int data,rev1;
  printf("enter the number:");
  scanf("%d",&data);
  rev1=rev(data);
  if(data==rev1)
  {
    printf("yes");

  }
  else 
  {
    printf("no");
  }
  
}
int rev(int data)
  {
    int rem[10],sum,q,i=0;    
	q=data;
    while(q>10)
    {
      rem[i]=q%10;
      q=q/10;
      if(q<10)
      {
        i++;
	rem[i]=q;
	
	
      }
	i++;
    }
    

for(i=0;rem[i]!='\0';i++)
    {
	 int pow1;
	pow1=power(10,i);     
	sum=sum+(pow1*rem[i]);
    }
  return sum;
  }
int power(int x,int y)
{
	int add=1,i;
	for(i=0;i<y;i++)
	{
		add=add*x;	
	}
return add;
}
