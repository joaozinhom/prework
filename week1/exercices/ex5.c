/*
Exercise 5. Once you have completed Exercise 4, describe how ElGamal can be implemented using an arbitrary abelian group.
Don’t forget to mention how public keys are computed.
Explain why using Zp with the operation of addition as your abelian group is insecure (Hint: recall Reading 2).
*/

/*
ElGamal does not really depend on integers mod p. The only things it uses are a group operation,
exponentiation (applying that operation repeatedly), and the inverse of an element. Any finite abelian group
provides all three, so the scheme works over an arbitrary abelian group G with a public element g.

The private key is a random x, and the public key is h = g^x, meaning g combined with itself x times under the
group operation. To encrypt a message m in G, pick a random k, compute c1 = g^k and the shared secret s = h^k,
and send (c1, c2) with c2 = m * s. To decrypt, the owner of x recovers the same secret as s = c1^x, since
c1^x = (g^k)^x = (g^x)^k = h^k, and then gets the message back as m = c2 * s^(-1). The group must be abelian so
that the secret matches either way and the inverse is well defined. Security relies on the discrete logarithm
problem in G being hard: given g and h = g^x, it must be infeasible to find x. The same code instantiates ElGamal
over Z*p (as in ex4) or over an elliptic curve, where g^x is written additively as x*G.

Using Zp under addition is insecure precisely because that hardness disappears. With addition as the operation,
g^x becomes repeated addition, x*g mod p, so the public key is h = x*g mod p. Recovering x from (g, h) is the
discrete log, but here it is just division mod p: since p is prime, g has an inverse g^(-1) mod p (extended
Euclid, or Fermat's g^(p-2) as in ex3), so an attacker computes x = h * g^(-1) mod p and reads the private key
straight off the public key in a few operations. This is the point of Reading 2: the discrete log is only hard in
carefully chosen groups, and being abelian is necessary for ElGamal to work but not enough to make it secure.
(Zp, +) is a fine abelian group in which discrete log is trivial, so ElGamal built on it is broken.
*/