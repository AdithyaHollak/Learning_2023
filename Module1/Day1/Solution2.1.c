#include <stdio.h>

int largest(int a, int b, int c) {
int greatest;
   if(a>=b && a>=c)
     greatest =a;
   
   else if(b>=a && b>=c)
     greatest =b;
   
   else
   	greatest=c;

}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = largest(num1, num2, num3);
    printf("The greatest number is: %d\n", result);

    return 0;
}

