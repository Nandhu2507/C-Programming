#include<stdio.h>
int main()
{
  int integer,r,q,count=0;
  scanf("%d",&integer);
  q=integer;
  while (q>10)
  {
    r=q%10;
    q=q/10;
    if(r!='\0')
    {
       count++;
    }
  }
  printf("Number of digit is :%d",count+1);
  return 0;
}
