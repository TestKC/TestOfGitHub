#include <stdio.h>

int main()
{
	printf("Hello World!\n");//#1
	#ifdef HELLO_TEST
		printf("XD\n");//#3
	#endif
}