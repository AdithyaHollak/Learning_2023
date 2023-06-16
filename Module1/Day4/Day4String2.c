#include <stdio.h>
#include <stdlib.h>

int main() {
        char str[] = "123Adi456";
        char str1[] = "123456";
        char str2[] = "Adithya Holla k";
        char str3[] = "Adithya456Hollak";
    
    int num = atoi(str);
    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);
    printf("------------------------------------------------------------\n") ;
    printf("String: %s\n", str);
    printf("Integer: %d\n", num);
    
    printf("------------------------------------------------------------\n") ;
   
    printf("String: %s\n", str1);
    printf("Integer: %d\n", num1);
    
    printf("------------------------------------------------------------\n") ;
    
    printf("String: %s\n", str2);
    printf("Integer: %d\n", num2);
     
    printf("------------------------------------------------------------\n") ;
    
    printf("String: %s\n", str3);
    printf("Integer: %d\n", num3);
    
    printf("------------------------------------------------------------\n") ;

    return 0;
}

