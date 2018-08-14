#include<stdio.h>
int main()
{
  int coll[10],limit,i,j,temp;
  scanf("%d",&limit);
  for(i=0;i<limit;i++)
  {
    scanf("%d",&coll[i]);
  }
  for (i=0;i<limit;i++)
  {
    for(j=0;j<limit;j++)
    {
        if(coll[j]>coll[i])
        {
          temp=coll[j];
          coll[j]=coll[i];
          coll[i]=temp;
        }
    }
  }
  for(i=0;i<limit;i++)
  {
    printf("%d",coll[i]);
  }
  
  return 0;
}
