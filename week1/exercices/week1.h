#ifndef WEEK1
# define WEEK1
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
#include <time.h>
# include <math.h>
typedef unsigned long long numberlong;
numberlong russian_peasant_multiplication(numberlong a, numberlong b, numberlong p);
numberlong is_prime(numberlong num);
numberlong mod_exp(numberlong base, numberlong exp, numberlong mod);
numberlong mod_inverse(numberlong base, numberlong mod);
#endif