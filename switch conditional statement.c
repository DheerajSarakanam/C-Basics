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
		case 2:
			printf("this is choice 2");
		case 3:
			printf("this is choice 3");	/*if we enter 1for this, output is
			"this is choice 1 this is coice 2 this is choice 3", to get only 
			required choice we should use break*/ 	
	}
}
