#include<stdio.h>
#include<ctype.h>


void toggle(char *str)
{
	while(*str)
	{
		if(isupper(*str))
		{
			*str =tolower(*str);
		}
	else if(islower(*str))
	{
		*str =toupper(*str);
	}
		str++;
	}
}
	
int main()
{
	char str[100];
	printf("Enter the string to toggle\n");
	scanf("%[^\n]s",&str);
	printf(" Entered String %s\n",str);
	toggle(str);
	printf(" Toggle String   is%s\n",str);
	return 0;
	
}


