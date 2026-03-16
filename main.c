#include <stdio.h>

// print('Enter line')
// line = input()
// print('Line:', line)

int main(void)
{
    printf("Enter line\n");

    char line[256];
    fgets(line, sizeof(line), stdin);
    printf("Line %s\n", line);
}
