#include<stdio.h>

int main()
{
	int marks;
	printf("Enter marks out of 100\n");
	scanf("%d",&marks);
	if(marks >=90)
		printf("Grade A");
	else if(marks >=75 && marks<=89)
		printf("Grade B");
	else if(marks>=60 && marks<=74)
		printf("Grade C");
	else if(marks >=50 && marks<=59)
		printf("Grade D");
	else
		printf("Grade F");
	return 0;
}
