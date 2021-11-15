#include<stdio.h>
void main()
{
	char a, b, c;
	printf("Enter three characters : "); /* character means alphabets */
	scanf("%c%c%c", &a, &b, &c);
	printf("Encoded numbers are : %d, %d, %d", a-95, b-95, c-95);
	/* space and comas b/w %d's should put to get clarified numbers like 4, 2, 21
	otherwise we get "4221" */ 
}

