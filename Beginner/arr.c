#include<stdio.h>
int main()
{
	int i,num,arr[20]={20,34,37,24,67,56,45,89,45,1,3,7};
	printf("enter a number:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
		
	}
	return 0;
	
}
