/*
Exercise 4. Implement ElGamal for Z∗ p in the language of your choice.
*/
#include "week1.h"

numberlong rand_range(numberlong low, numberlong high)
{
	return (low + (numberlong)rand() % (high - low + 1));
}

numberlong Elgamal(numberlong p, numberlong generator, numberlong m)
{
	numberlong x = rand_range(1, p - 2);
	numberlong h = mod_exp(generator, x, p);

	numberlong k = rand_range(1, p - 2);
	numberlong c1 = mod_exp(generator, k , p);
	numberlong s = mod_exp(h, k, p);
	numberlong c2 = russian_peasant_multiplication(m, s, p);

	numberlong s2 = mod_exp(c1, x, p);
	numberlong s_inv = mod_exp(s2, p - 2, p);
	numberlong result = russian_peasant_multiplication(c2, s_inv, p);
	return (result);
}

int main(void)
{
	srand(time(NULL));

	numberlong p = 2087;
	numberlong g = 5;
	numberlong m = 42;

	numberlong back = Elgamal(p, g, m);
	printf("m = %llu -> recovered = %llu\t%s\n",
		m, back, back == m ? "OK" : "FAIL");

	return (0);
}