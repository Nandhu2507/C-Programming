#include<stdio.h>
int main()
{
  int arr[10],limit,i,j,t;
  scanf("%d",&limit);
  for(i=0;i<limit;i++)
  {
    scanf("%d",&arr[i]);
  }
  for (i=0;i<limit;i++)
  {
    for(j=0;j<limit;j++)
    {
        if(arr[j]>arr[i])
        {
          t=arr[j];
          arr[j]=arr[i];
          arr[i]=t;
        }
    }
  }
  for(i=0;i<limit;i++)
  {
    printf("%d\t",arr[i]);
  }
  
  return 0;
}
