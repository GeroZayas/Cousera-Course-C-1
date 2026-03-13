#define STB_DS_IMPLEMENTATION

#include "stdio.h"
#include "string.h"
#include "stb_ds.h"
#include "stdlib.h"

int main(void)
{
    FILE *file = fopen("data.txt", "r");
    char line[256];

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
