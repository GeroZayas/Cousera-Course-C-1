#define STB_DS_IMPLEMENTATION

#include "stdio.h"
#include "string.h"
#include "stb_ds.h"

int main(void)
{
    int *array = NULL;
    arrput(array, 44);
    arrput(array, 56);
    arrput(array, 34);
    arrput(array, 23);
    arrput(array, 29);
    printf("The length of the array is  %ld\n", arrlen(array));

    for (int elem = 0; elem < arrlen(array); elem++)
    {
        if (array[elem] == 23)
        {
            printf("ELEMENT IS 23!\n");
            continue;
        };

        printf("%d\n", array[elem]);
    };
}
