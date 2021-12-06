#include<stdio.h>
void main()
{
	int num;
	scanf("%d", &num);
	if(num%3==0 && num%7==0 && num%9==0)
	printf("given no. is divisible by 3, 7, 9", num);
	else
	printf("given no. is not divisible by 3, 7, 9", num);
}
