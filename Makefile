test:
	gcc -std=c11 -O0 -Wall -orun test.c
valgrind:
	valgrind --leak-check=yes ./run
