#include <stdio.h>
int main()
{
  int a,b,arr[20],i,j,sum=0;
  scanf("%d\t%d",&a,&b);
  for(i=0;i<a;i++)
  {
    scanf("%d",&arr[i]);

  }
  for (j=0;j<b;j++)
  {
    sum=sum+arr[j];
  }
  printf("%d",sum);
}
