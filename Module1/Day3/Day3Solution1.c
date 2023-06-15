#include <stdio.h>

void Numbers(int n) {
    if(n<=0)
        return;
    Numbers(n-1);
     printf("%d",n);
}

void Spaces(int n) {
 for(int i=0;i<n;i++)
       printf("%d",n);
    
}

void ReverseNumbers(int n) {
        if(n<=0)
          return;
      printf("%d",n);
      ReverseNumbers(n-1);
  }
    

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Pattern:\n");
    for (int i = 1; i <n; i++) {
        Numbers(n-i);
        Spaces(n);
        ReverseNumbers(n-i);
    }

    return 0;
}

