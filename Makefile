gcc = gcc -std=c11 -O0 -Wall -orun test.c
sinteger = extmod/primitive/int8.c extmod/primitive/int16.c extmod/primitive/int32.c extmod/primitive/int64.c
uinteger = extmod/primitive/unt8.c extmod/primitive/unt16.c extmod/primitive/unt32.c extmod/primitive/unt64.c
primitive = extmod/primitive/bool.c $(sinteger) $(uinteger)
run = ./run
test:
	$(gcc)
	$(run)
test-primitive:
	$(gcc) $(primitive)
	$(run)
valgrind:
	valgrind --leak-check=yes $(run)
