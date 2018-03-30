gcc = gcc -std=c11 -O0 -Wall -orun test.c
primitive = extmod/primitive/bool.c
test:
	$(gcc)
	./run
test-primitive:
	$(gcc) $(primitive)
	./run
valgrind:
	valgrind --leak-check=yes ./run
