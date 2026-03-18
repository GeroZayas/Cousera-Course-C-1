#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int c;
    int count = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++count;
        else if (c != ' ')
            count = 0;
        if (count > 1)
        {
            continue;
        }

        putchar(c);
    }
}
