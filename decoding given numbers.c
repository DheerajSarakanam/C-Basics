#include<stdio.h>
void main()
{
	int a, b, c;
	printf("Enter three numbers : ");
	scanf("%d%d%d", &a, &b, &c);
	printf("Decoded name is : %c%c%c", a+95, b+95, c+95);
}

