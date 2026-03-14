#define STB_DS_IMPLEMENTATION

#include "stdio.h"
#include "string.h"
#include "stb_ds.h"
#include "stdlib.h"

int power(int x, int y);

int main(void)
{
    int result = power(2, 20);
    printf("%i\n", result);
}

int power(int num, int power)
{

    int count;
    for (count = 1; power > 0; --power)
    {
        count = count * num;
    }
    return count;
}
