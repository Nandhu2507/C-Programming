#include<stdio.h>
int main()
{
  int coll[10],limit,i,j,temp;
  scanf("%d",&limit);
  for(i=0;i<limit;i++)
  {
    scanf("%d",&coll[i]);
  }
  for(i=0;i<limit;i++)
  {
    printf("%d%d\n",coll[i],i);
  }
  
  return 0;
}
