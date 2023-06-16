#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[100];
	int sumeven=0;
	int sumodd=0;
	int difference=0;
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
		if(a[i] % 2 ==0)
		{
			sumeven=sumeven+a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i] % 2 !=0)
		{
			sumodd=sumodd+a[i];
		}
	}
printf(" The sum of  even array  elements is %d\n",sumeven);
printf(" The sum of  odd  array  elements is %d\n",sumodd);

difference = -1*(sumodd -sumeven);
printf("The difference between even and odd is %d\n",difference);

return 0;
}

	
	
