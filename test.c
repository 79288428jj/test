#include<stdio.h>
#include<stdlib.h>

void fn()
{
	printf("fb");
}

int main()
{
	onexit(fn);
	printf("test:");
	return 0;
}
