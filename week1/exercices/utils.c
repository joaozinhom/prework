#include "week1.h"

numberlong is_prime(numberlong num)
{
	numberlong i = 2;
	if(num==1 || num==0)
		return (0);		
	while(i <= sqrt(num))
	{
		if (num % i == 0)
		{
			return (0);
		}
		i++;
	}	
	return (1);
}


numberlong russian_peasant_multiplication(numberlong a, numberlong b, numberlong p) 
{
    numberlong result = 0;
    
	a = a % p ;
    while (b > 0) {
        
        // If b is odd, add a to result and reduce it to mod p to not blow this thing up
        if (b & 1) {
            result = (result + a) % p;
        }
        
        // Double a(and reduces it to not blows up!), and halves b
		a = (a * 2) % p;
        b /= 2;
    }

    return result;
}


numberlong mod_exp(numberlong base, numberlong exp, numberlong mod)
{
	//temporary guard rail i dont think a good solution to solve this yet.
	if (mod == 0)
	{
		return (0);
	}
	base = base % mod;
	numberlong result = 1 % mod;
	while(exp > 0)
	{
		if (exp & 1)
		{
			result = russian_peasant_multiplication(result,base,mod);
		}
	base  = russian_peasant_multiplication(base, base , mod);
	exp /= 2;
	}
	return (result);
}