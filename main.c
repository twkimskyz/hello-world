#include <stdio.h>
#include <stdlib.h>

int	g_Lib; // global
int	g_Cfg; // R100

int func_add ( int arg1, int arg2 )
{
	return ( arg1 + arg2 );
}

int func_sub ( int arg1, int arg2 )
{
	return ( arg1 - arg2 );
}

int func_exp ( )
{
	// dummy return
	return 0;
}

int main ()
{
	int		arg1;
	int		arg2;
	int		sum;
	int		sub;

	printf("hello-world\n");

	arg1 = 4;
	arg2 = 5;

	sum = func_add ( arg1, arg2 );
	sub = func_sub ( arg1, arg2 );

	printf ("sum = %d\n", sum);
	printf ("sub = %d\n", sub);

	return 0;
}
