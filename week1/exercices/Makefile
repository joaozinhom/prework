CC = clang
CFLAGS = -Wall -Wextra

# Shared helpers (is_prime, russian_peasant_multiplication, mod_exp) live in utils.c.
DEPS = utils.c

BINS = ex1 ex3 ex4

all: $(BINS)

ex1: ex1.c $(DEPS)
	$(CC) $(CFLAGS) $^ -o $@

ex3: ex3.c $(DEPS)
	$(CC) $(CFLAGS) $^ -o $@

ex4: ex4.c $(DEPS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(BINS)

.PHONY: all clean
