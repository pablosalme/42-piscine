#ifndef RUSH_01_H
#define RUSH_01_H

#define SIZE 4

int solve(int grid[SIZE][SIZE], int views[16]);
int is_valid(int grid[SIZE][SIZE], int views[16], int row, int col, int num);
void print_grid(int grid[SIZE][SIZE]);
int parse_input(char *str, int views[16]);
void initialize_grid(int grid[SIZE][SIZE]);

#endif
