#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) /* count new lines in input */
{
    int c, nl;
    nl = 0;
    int spaces = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c==' ')
            ++spaces;
    printf("%d %d\n", spaces, nl);
}
