#include<stdio.h>
int main()
{
	int cn;
	char g;
	printf("Enter a course number (1,2 or 3 ): ");
	scanf("%/d",&cn);
	
	switch(cn)
{
	case 1:
	case 2:
	case 3:
		printf("Enter the letter grade for course 1 (A,B,C,D, OR F): ");
		scanf("%c",&g);
		switch(g)
	{	case A:
			printf("Excellent");
			break;
		case B:
			printf("Good");
			break;
		case C:
			printf("Satisfactory");
			break;
		case D:
			printf("Needs Improvement");
			break;
		Case F:
			printf("You have failed");
			break;
		default
		printf("Invalid grade");
}	break;
	
	printf("Invalid course");
}
	return 0
	
	}
