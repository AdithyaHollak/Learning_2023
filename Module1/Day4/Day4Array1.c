#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[100];
	int sum=0;
	int avg =0;
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
	
	for(int i=0;i<n;i++)
	{
		sum =sum+a[i];
		avg = sum/n;
	}
	printf("The sum of array elements: %d\n",sum);
	printf("The average of array elements: %d\n",avg);
		
}
