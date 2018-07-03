#include<stdio.h>
int main()
{
  int a,b,i,sum=0;
  scanf("%d\t%d",&a,&b);
  for(i=1;i<=a;i++)
  {
    printf("%d\t",i);

  }
  for (i=0;i<b;i++)
  {
    sum=sum+i;

  }
  printf("\n%d",sum);
return 0;
}
