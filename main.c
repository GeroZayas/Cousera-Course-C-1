#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// while True:
//     try:
//         line = input()
//     except:  # If we get EOF
//         break
//     line = line.strip()
//     guess = int(line)
//     if guess == 42:
//         print('Nice work!')
//         break
//     elif guess < 42 :
//         print('Too low - guess again')
//     else :
//         print('Too high - guess again')

int main(void)
{   
    char line[100];

    while (gets(line) != NULL)
    {
        int guess = atoi(line);
        if (guess == 42)
        {
            printf("Nice work!\n");
            break;
        }
        else if (guess < 42)
        {
            printf("Too low - guess again\n");
        }
        else
        {
            printf("Too high - guess again\n");
        }
    }
}
