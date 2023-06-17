#include<stdio.h>
#include<stdlib.h>
int main()
{
      int num, choice;
      printf("\nEnter Decimal Number:\t");
      scanf("%d", &num);
                printf("\nBinary Value     :\t");
                conversion(num, 2);
                printf("\nOctal Value      :\t");
                conversion(num, 8);
    printf("\nHexadecimal Value:\t");
                conversion(num, 16);
      return 0;
}
void conversion(int num, int base)
{
      int remainder = num % base;
      if(num == 0)
      {
            return;
      }
      conversion(num / base, base);
      if(remainder < 10)
      {
            printf("%d", remainder);
      }
      else
      {
            printf("%c", remainder - 10 + 'A' );
      }
}
