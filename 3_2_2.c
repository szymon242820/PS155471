#include <stdio.h>
#include <stdlib.h>

int* fun(int *x, int *y)
{
	if(*x < *y)
	{
		return x;
	}
	return y;
}
int main() 
{
	int x = 15, y = 20;
	printf("%#010x", fun(&x, &y));
	return 0;
}
