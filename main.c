#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// maxval = None
// minval = None
// while True:
//     line = input()
//     line = line.strip()
//     if line == "done" : break
//     ival = int(line)
//     if ( maxval is None or ival > maxval) :
//         maxval = ival
//     if ( minval is None or ival < minval) :
//         minval = ival

// print('Maximum', maxval)
// print('Minimum', minval)

int main(void)
{
    char line[1000];
    // int maxval, minval = 0;

    int maxval = 0;
    int minval = 0;

    while (gets(line) != NULL)
    {
        line[strcspn(line, "\n")] = '\0';

        if (strcmp(line, "done") == 0)
            break;

        int ival = atoi(line);
        if (maxval == 0 || ival > maxval)
        {
            maxval = ival;
        }
        if (minval == 0 || ival < minval)
        {
            minval = ival;
        }
    }
    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
}
