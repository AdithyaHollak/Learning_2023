#include<stdio.h>

char Grade(int marks)
{
	 char grade;
	 switch(marks)
	 {
	         case 90 ... 100:
	 		grade ='A';
	 		break;
	 		
	 	case 75 ... 89:
	 		grade ='B';
	 		break;
	 		
	 	case 60 ... 74:
	 		grade ='C';
	 		break;
	 		
	 	case 50 ... 59:
	 		grade ='D';
	 		break;
	 		
	 	case  36 ... 49:
	 		grade ='E';
	 		break;
	 	
	 	case 0 ... 35:
	 		grade ='F';
	 		break;
	 		
	 	default:
	 		grade = 'X';  
            		break;
            	}
            return grade;
 }
 
 int main()
{
 	int i;
 	int score[]={ 65 ,66,67,68,69,70};
 	int n=sizeof(score)/sizeof(score[0]);
 	
 	for(i=0;i<n;i++)
 	{
 		int marks=score[i];
 		char grade=Grade(marks);
 		printf(" Grade %c\n",grade);
 	}
 	return 0;
 }
 	
	 		
	 	
