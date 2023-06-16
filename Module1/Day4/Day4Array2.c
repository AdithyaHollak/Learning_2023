#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[100];
	int n;
	
	
	printf("Enter the number of array elements to be inserted\n");
	scanf("%d",&n);
	
	printf("Enter Array Elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Entered Array Elements\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	int min=a[0];
	
	for(int i=0;i<n;i++)
	{
	      
		if(a[i]<min)
			min=a[i];
	}
	
	int max=a[0];
	for(int i=0;i<n;i++)
	{
	      
		if(a[i]>max)
			max=a[i];
	}
	
	printf("Minimum array element is %d\n",min);
	printf("Maximum  array element is %d\n",max);
	
}
