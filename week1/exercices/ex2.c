/*
Exercise 2. Find at least one proof of Fermat’s little theorem online that you find convincing (there are many arguments out there). 
Be prepared to share! (For those feeling they have little background in math and are daunted, 
I suggest by starting with either Dirichlet’s proof or the “Necklace” proof and using your favorite chat bot).
*/

/*
Consider all sequences of length p formed using the available beads. The total number is a^p. Among these, exactly a are monochromatic (all beads of the same color). The remaining a^p - a sequences are non-monochromatic.

Close each sequence into a circle to form a necklace. Rotations of the same necklace are equivalent. For any non-monochromatic sequence, its period k (the smallest number of rotations to return to the original sequence) divides p. Since p is prime, its only divisors are 1 and p. A period of k = 1 implies a monochromatic sequence, which is excluded. Thus, k = p; in other words, every non-monochromatic sequence generates exactly p distinct rotations.

Therefore, the a^p - a non-monochromatic sequences are partitioned into groups of size p, which implies that p divides a^p - a; that is:

a^p ≡ a (mod p) ✓

The primality of p is essential—without it, the period could be an intermediate divisor, invalidating the argument.
*/