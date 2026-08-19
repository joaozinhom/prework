/*
Exercise 3. Use Fermat’s little theorem and fast modular exponentiation to come up with an alternative algorithm for computing 
the multiplicative inverse of an element in Z∗ p.
 Implement this algorithm in the language of your choice.
 */

#include "week1.h"

numberlong mod_inverse(numberlong base, numberlong mod)
{
	if (!is_prime(mod))
		return (0);
	if (base % mod == 0)
		return (0);
	numberlong result = mod_exp(base, mod - 2, mod);
	if (russian_peasant_multiplication(base, result, mod) == 1)
		return (result);
	else
		return (0);
}

int main(void)
{
	printf("inv(3)  mod 7   = %llu\t(esperado 5)\n",  mod_inverse(3, 7));
	printf("inv(2)  mod 11  = %llu\t(esperado 6)\n",  mod_inverse(2, 11));
	printf("inv(10) mod 17  = %llu\t(esperado 12)\n", mod_inverse(10, 17));

	printf("\ninv(4)  mod 8   = %llu\t(mod nao primo, esperado 0)\n", mod_inverse(4, 8));
	printf("inv(7)  mod 7   = %llu\t(base ≡ 0, esperado 0)\n",        mod_inverse(7, 7));

	return (0);
}