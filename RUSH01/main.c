#include "rush_01.h"
#include <unistd.h>

int main(int argc, char **argv)
{
    int views[16];
    int grid[SIZE][SIZE];

    if (argc != 2)
    {
        write(1, "Error\n", 6);
        return 1;
    }

    if (!parse_input(argv[1], views))
    {
        write(1, "Error\n", 6);
        return 1;
    }

    initialize_grid(grid);

    if (solve(grid, views))
    {
        print_grid(grid);
    }
    else
    {
        write(1, "Error\n", 6);
    }

    return 0;
}
