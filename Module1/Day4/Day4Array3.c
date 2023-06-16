#include<stdio.h>

int main()
{
	int n;
	int i;
	int a[n];
	
	printf("Enter the number of array elements to be entered\n");
	scanf("%d",&n);
	
	printf("Enter Array Elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	printf("Reverse array elementys \n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
		
}
	
