#include <stdio.h>
#include <stdlib.h>

int func_add ( int arg1, int arg2 )
{
	return ( arg1 + arg2 );
}

int main ()
{
	int		arg1;
	int		arg2;
	int		sum;

	printf("hello-world\n");

	arg1 = 4;
	arg2 = 5;

	sum = func_add ( arg1, arg2 );

	printf ("sum = %d\n", sum);

	return 0;
}
