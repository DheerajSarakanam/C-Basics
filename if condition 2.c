#include<stdio.h>
void main()
{
	int number1, number2;
	scanf("%d%d", &number1, &number2);
	if(number1 > number2)
	{
		printf("%d is bigger number", number1);
	}
	else
	{
		printf("%d is bigger number", number2);
	}
}
