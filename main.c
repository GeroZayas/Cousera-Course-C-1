#define STB_DS_IMPLEMENTATION

#include "stdio.h"
#include "string.h"
#include "stb_ds.h"
#include "stdlib.h"

int main(void)
{
    char buffer[100];
    printf("Enter text: ");
    fgets(buffer, sizeof(buffer), stdin);
    printf("You wrote: %s", buffer);
}
