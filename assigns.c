#include<stdio.h>
void main()
{
	int a = 10, b = 2;
	a += b;
	// when we run (a += b) eq. the outputs are a=12, b=2
	a -= b;
	// after running above eq. again run the 2nd eq. (a -= b) then outputs are a=10, b=2
	a *= b;
	// outputs are 10, 20
	a /= b;
	// outputs are 10, 2
	a %= b;
	// final outputs are 0, 2
	printf("final outputs are %d, %d", a, b);
}
