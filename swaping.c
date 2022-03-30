#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d", &a, &b);
	int i;
	if (a>b)
	{
		int t = a;//using t i.e temp for inter changing a & b
		a = b;
		b = t;
	}
	for(i=a; i<=b; i++)
	{
		printf("%d ", i);
	}
	
}
