#define STB_DS_IMPLEMENTATION

#include "stdio.h"
#include "string.h"
#include "stb_ds.h"
#include "stdlib.h"

int main(void)
{

    int arr[10];

    for (size_t i = 0; i < 10; i++)
    {
        arr[i] = (int)i;
        printf("%i\n", arr[i]);
    }

    return 0;
}
