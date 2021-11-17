#include<stdio.h>
void main()
{
	int a = 10, b = 2, c = 20, d = 10, e = 10, f = 2, g = 10, h = 20, i = 10, j = 30;
	a += b;
	c -= d;
	e *= f;
	g /= h;
	i %= j;
	printf("a += b : %d, %d\n", a, b);
	printf("c -= d : %d, %d\n", c, d);
	printf("e *= f : %d, %d\n", e, f);
	printf("g -= h : %d, %d\n", g, h);
	printf("i -= j : %d, %d", i, j);
}
