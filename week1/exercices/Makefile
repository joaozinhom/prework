CC = clang
CFLAGS = -Wall -Wextra

# Shared helpers used across exercises.
# ex1.c provides mod_exp (its main is commented out), utils.c the rest.
DEPS = utils.c ex1.c

ex3: ex3.c $(DEPS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f ex3

.PHONY: clean
