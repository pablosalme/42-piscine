#include "rush_01.h"
#include <unistd.h>

void print_grid(int grid[SIZE][SIZE])
{
    int i;
    int j;
    char buffer[2];

    i = 0;
    while (i < SIZE)
    {
        j = 0;
        while (j < SIZE)
        {
            buffer[0] = grid[i][j] + '0';
            buffer[1] = ' ';
            write(1, buffer, 2);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}

int parse_input(char *str, int views[16])
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0' && j < 16)
    {
        if (str[i] < '1' || str[i] > '4')
            return 0;
        views[j] = str[i] - '0';
        j++;
        i++;
        if (str[i] == ' ')
            i++;
    }

    if (j != 16)
        return 0;

    return 1;
}

void initialize_grid(int grid[SIZE][SIZE]) {
    int i;
    int j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            grid[i][j] = 0;
        }
    }
}

