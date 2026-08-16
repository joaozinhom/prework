#include "week1.h"

int is_prime(int num)
{
	int i = 2;
	if(num==1 || num==0)
		return (0);		
	while(i < num)
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
        
        // Double a(and reduces it to not blows up :)!), and halve b
		a = (a * 2) % p;
        b /= 2;
    }
    
    return result;
}