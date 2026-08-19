/*
Exercise 1. Implement the fast exponentiation algorithm in the language of your choice. 
This will allow us to compute public keys, and will also be useful in future exercises.
*/
#include "week1.h"

int main(void)
{
	printf("3^13 mod 17   = %llu\t(esperado 12)\n", mod_exp(3, 13, 17));
	printf("5^9  mod 13   = %llu\t(esperado 5)\n", mod_exp(5, 9, 13));
	printf("2^10 mod 1000 = %llu\t(esperado 24)\n", mod_exp(2, 10, 1000));
	printf("7^0  mod 17   = %llu\t(esperado 1)\n", mod_exp(7, 0, 17));

	printf("\n3^16 mod 17       = %llu\t(Fermat, esperado 1)\n",
		mod_exp(3, 16, 17));
	printf("5^65536 mod 65537 = %llu\t(Fermat, esperado 1)\n",
		mod_exp(5, 65536, 65537));

	numberlong p = 4294967291ULL;
	numberlong g = 5;
	numberlong x = 123456789;
	printf("\nchave publica: %llu^%llu mod %llu = %llu\n",
		g, x, p, mod_exp(g, x, p));

	return (0);
}
