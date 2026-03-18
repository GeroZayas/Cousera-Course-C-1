build:
	zig cc -std=c99 -pedantic -Wall -Wextra -Werror -o main main.c 

run:
	@./main

raylib-build:
	gcc -o game_name main.c -lraylib -lGL -lm -lpthread -ldl -lrt -lX11