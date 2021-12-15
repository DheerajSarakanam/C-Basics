#include<stdio.h>
void main()
{
	int choice;
	printf("Enter your choice");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("this is choice 1");
			break;
		case 2:
			printf("this is choice 2");
			break;
		case 3:
			printf("this is choice 3");
			break;
		default:
			printf("invalid input");	
			/*if we enter 4 there is no coice mentioned so we get
			"invalid input" output*/ 	
	}
}
