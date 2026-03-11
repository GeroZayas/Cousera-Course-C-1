#define STB_DS_IMPLEMENTATION

#include "stdio.h"
#include "string.h"
#include "stb_ds.h"
#include "stdlib.h"

void say_hello(char *name);

int main(void)
{
    char name[100];
    
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    say_hello(name);
}

void say_hello(char *name)
{
    printf("Yo! What is up!? %s\n", name);
}
