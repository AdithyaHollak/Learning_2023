#include<stdio.h>

int count(unsigned int t)
{
	int c=0;
	
	while(t!=0)
	{
		c+=t &1 ;
		t>>=1;
	}
	return c;
}
int totalbits(unsigned int arr[], int size) {
    int totalBits = 0;
    
    for (int i = 0; i < size; i++) {
        totalBits += count(arr[i]);
    }
    
    return totalBits;
}

int main() {
    unsigned int a[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);
    
    int totalBits = totalbits(a, size);
    
    printf("The total number of bits in the given array is: %d\n", totalBits);
    
    return 0;
}
