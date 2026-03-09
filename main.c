#include "stdio.h"
#include "string.h"

int main(void)
{
    char arr[3][15] = {"Gero", "Mar", "Sonia Infantes"};

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i]);
        for (int letter = 0; letter < strlen(arr[i]); letter++){
            printf("%c - ", arr[i][letter]);
        }
        printf("\n");
    }

    return 0;
}
