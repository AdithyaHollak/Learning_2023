#include<stdio.h>


void swap1(int *a , int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void swap2(float *c , float *d)
{
	float temp1;
	temp1=*c;
	*c=*d;
	*d=temp1;
}
void swap3(char *e, char  *f)
{
	char temp2;
	temp2=*e;
	*e=*f;
	*f=temp2;
}
int main()
{
	int a=5 , b=10;
	float c=3.1 , d=4.5;
	char e='a' , f= 'b';
	
	printf("Before swaping in int data type is %d %d \n",a,b);
	printf("Before swaping in float data type is %f %f \n",c,d);
	printf("Before swaping in char data type is %c %c \n",e,f);
	swap1(&a,&b);
	swap2(&c,&d);
	swap3(&e,&f);
	
	printf("After swaping in int data type is %d %d \n",a,b);
	printf("After swaping in float data type is %f %f \n",c,d);
	printf("After swaping in char data type is %c %c \n",e,f);
	
}


