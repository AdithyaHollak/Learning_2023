#include<stdio.h>

int main()
{
	int a[5]={10,20,30,40,50};
	int sum=0;
	int n=sizeof(a)/sizeof(a[0]);
	
	for(int i=0 ;i <n ;i=i+2)
	{
		sum = sum +a[i];
	
	}
	int result=sum;
	printf("The result is %d ", result);
	
}
