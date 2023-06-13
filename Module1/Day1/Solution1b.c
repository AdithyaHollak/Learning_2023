#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);
    int max= a>b ? a : b;
    printf("Largest number is %d\n",max);
   
 
    return 0;
    

}
