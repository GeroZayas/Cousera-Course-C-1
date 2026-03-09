build:
	zig cc -std=c99 -pedantic -Wall -o main main.c 

run:
	@./main