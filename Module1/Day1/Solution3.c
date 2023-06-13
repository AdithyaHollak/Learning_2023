#include<stdio.h>
#define max 50

int main()
{

	int Rollno;
	char Name[100];
	int total ;
	float percentage;
	int a,b,c;
	int marks_physics , marks_chemistry ,marks_maths;
	
	printf("Enter Name\n");
	fgets(Name ,max, stdin);
	
	printf("Enter Rollno:\n");
	scanf("%d",&Rollno);
	
	
	printf("Enter Physics Marks out of 100 \n");
	scanf("%d",&marks_physics);
	
	printf("Enter Maths Marks  out of 100\n");
	scanf("%d",&marks_maths);
	
	printf("Enter Chemistry  Marks  out of 100\n");
	scanf("%d",&marks_chemistry);
	
	a=marks_physics;
	b=marks_maths;
	c=marks_chemistry;
	
	int sum= a  + b + c;
	percentage =(sum*100)/300;
	printf("Name of student and his rollno \n %s %d\n",Name , Rollno);
	printf("The marks Scored in Physics is %d \n",marks_physics);
	printf("The marks Scored in Maths is %d \n",marks_maths);
	printf("The marks Scored in Chemistry  is %d \n",marks_chemistry);
	
	printf("The Total marks Secured in the Examination %d\n",sum);
	printf("The Total Percentage  Secured %f\n", percentage);

}
