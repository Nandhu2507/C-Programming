#include<stdio.h>
int main()
{
	int max=0,i,num,arr[20];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<num;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\n%d",max);
	return 0;
	
}
