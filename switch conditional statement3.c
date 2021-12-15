#include<stdio.h>
void main()
{
	int main_choice, sub_choice;
	int a, b;
	printf("Enter any two numbers\n");
	scanf("%d%d", &a, &b);
	printf("Choose one of the following options\n1. Arithematic operation\n2. Relational operations\n3. Bitwise operations\n");
	scanf("%d", &main_choice);
	switch(main_choice)
	{
		case 1:
			printf("Again choose one of the following sub operatins\n1. +\n2. -\n3. *\n4. /\n5. %%\n");
			scanf("%d", &sub_choice);
			switch(sub_choice)
			{
				case 1:
				printf("%d + %d = %d", a, b, a+b);
				break;
				case 2:
				printf("%d - %d = %d", a, b, a-b);
				break;
				case 3:
				printf("%d * %d = %d", a, b, a*b);
				break;
				case 4:
				printf("%d / %d = %d", a, b, a/b);
				break;
				case 5:
				printf("%d %% %d = %d", a, b, a%b);
				break;
			}		 	
	}
}
