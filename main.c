#define STB_DS_IMPLEMENTATION

#include "stdio.h"
#include "string.h"
#include "stb_ds.h"
#include "stdlib.h"

int main(void)
{
    int c;
    printf("Enter a character:\n");
    c = getchar();

    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
