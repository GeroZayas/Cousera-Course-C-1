build:
	zig cc -std=c99 -pedantic -Wall -Wextra -Werror -o main main.c 

run:
	@./main