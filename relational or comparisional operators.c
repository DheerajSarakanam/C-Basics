#include<stdio.h>
void main()
{
	int a, b;
	a = 20;
	b = 10;
	printf("%d > %d ---> %d\n", a, b, a > b); /* here 1 means true and 0 means false */
	printf("%d < %d ---> %d\n", a, b, a < b);
	printf("%d >= %d ---> %d\n", a, b, a >= b);
	printf("%d <= %d ---> %d\n", a, b, a <= b);
	printf("%d == %d ---> %d\n", a, b, a == b);
	printf("%d != %d\n\n", a, b, a != b);
	             /* (or) */
	int A, B, C, D, E, F;
	A = 20 > 10;
	B = 20 < 10;
	C = 20 >= 10;
	D = 20 <= 10;
	E = 20 == 10;
	F = 20 != 10;
	printf("20 > 10 ---> %d\n", A); /* here 1 means true and 0 means false */
	printf("20 < 10 ---> %d\n", B);
	printf("20 >= 10 ---> %d\n", C);
	printf("20 <= 10 ---> %d\n", D);
	printf("20 == 10 ---> %d\n", E);
	printf("20 != 10 ---> %d", F);             
}
