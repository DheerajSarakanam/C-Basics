#include<stdio.h>
#include<limits.h>
void main()
{
	printf("Short Int:\nSigned:%hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf("Unsigned:%d to %hu\n\n",0, USHRT_MAX); //double (\n\n) is used for extra line b/w short int and int 
	printf("Int:\nSigned:%d to %d\n", INT_MIN, INT_MAX);
	printf("Unsigned:%d to %u\n\n", 0, UINT_MAX);
	printf("Long Int:\nSigned:%ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("Unsigned:%d to %lu\n\n", 0, ULONG_MAX);
	printf("Long Long Int:\nSigned:%lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
	printf("Unsigned:%d to %llu", 0, ULONG_LONG_MAX);
}
