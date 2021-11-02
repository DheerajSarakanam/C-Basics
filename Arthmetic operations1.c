/* All arithmetic operations */
#include <stdio.h>
void main()
{
	/* addition */
	int a, b, s;
	a = 4;
	b = 4;
	s = a+b;
	printf("Sum of %d and %d is %d\n", a, b, s);
	
	/* subtraction */
	int c, d, t;
	c = 10;
	d = 3;
	t = c-d;
	printf("Difference of %d and %d is %d\n", c, d, t);
	
	/* multiplication */
	int e, f, u;
	e = 2;
	f = 4;
	u = e*f;
	printf("Product of %d and %d is %d\n", e, f, u);
	
	/* division */
	float g, h, v;
	g = 10;
	h = 3;
	v = g/h;
	printf("Quotient of %f and %f is %f\n", g, h, v);
	
	/* division */
	int i, j; /* to get output as i and j without decimals and w with decimals we should use both int and float */
	float w;  /* then we get quotient of 10 and 3 is 3.33333 instead of getting 10.0000 and 3.0000 */
	i = 10;
	j = 3;
	w = g/h;
	printf("Quotient of %d and %d is %f\n", i, j, w);
	
	/* modulo division */
	int k, l, x;
	k = 257;
	l = 3;
	x = k/l;
	printf("Remainder of %d and %d is %d", k, l, x);
}

