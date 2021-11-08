#include<stdio.h>
void main()
{
	/* &&--> logical AND */
	/* gives true if both operands are true */
	/* gives false if any one of the operands is false */
	printf("%d\n", (30>20) && (20>10)); /* here 1 means true and 0 means false */
	printf("%d\n", (35<20) && (20>10));
	/* || --> logical AND */
	/* gives true even if any one of the operands is true */
	/* gives false only if both operands are false */
	printf("%d\n", (30>20) || (20<10));
	printf("%d", (30<20) || (20<10));
	
}
