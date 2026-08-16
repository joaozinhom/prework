#ifndef WEEK1
# define WEEK1
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
typedef unsigned long long numberlong;
numberlong russian_peasant_multiplication(numberlong a, numberlong b, numberlong p);
int is_prime(int num);
numberlong mod_exp(numberlong base, numberlong exp, numberlong mod);
#endif