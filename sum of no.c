#include <stdio.h>
int main()
{
	int a,b,s=0;
	scanf("%d%d", &a, &b);// 10 15
	int i;
	for(i=a;i<=b;i++)//i=16<=15
	{
		s=s+i;//0+10=10+11=21+12=33.......
    }
    printf("%d",s);
}

