#include<stdio.h>
int main()
{
	int i,num,arr[20],min=20000;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<num;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\n%d",min);
	return 0;
	
}
