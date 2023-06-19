#include <stdio.h>  
int linearSearch(int a[], int n, int val) {  
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == val)  
        return i+1;  
    }  
  return -1;  
}  
int main() { 
  int n; 
  int a[n];  
  int val ;
  printf("Enter the number of elements to be inserted:\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  printf("Enter the  elements to be search :\n");
  scanf("%d",&val);
  int res = linearSearch(a, n, val); 
  printf("The elements of the array are - ");  
  for (int i = 0; i < n; i++)  
  	printf("%d ", a[i]);   
  printf("\nElement to be searched is - %d", val);  
  if (res == -1)  
  printf("\nElement is not present in the array");  
  else  
  printf("\nElement is present at %d position of array\n", res);  
  return 0;  
}
