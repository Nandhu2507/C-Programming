#include<stdio.h>
int main()
{
	int max=0,i,num,arr[20]={20,34,37,24,67,56,45,89,45,1,3,7};
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\n%d",max);
	return 0;
	
}
