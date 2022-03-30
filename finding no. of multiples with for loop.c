//finding no. of x multiples b/w 2 nos.
#include <stdio.h>
int main()
{
	int a,b, x, count=0;
	scanf("%d%d%d", &a, &b, &x);
	int i;
	for(i=a; i<=b; i++)
	{
		if(i%x == 0)
		{
			count++;
		}
	}
	printf("%d ", count);
}
//enter 10 20 3
//output 12 15 18
