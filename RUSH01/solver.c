#include "rush_01.h"
#include <stdio.h>

int is_valid_row(int grid[SIZE][SIZE], int row, int view_left, int view_right) {
    int max;
    int visible;
    int i;

    // Validación desde la izquierda
    max = 0;
    visible = 0;
    for (i = 0; i < SIZE; i++) {
        if (grid[row][i] > max) {
            max = grid[row][i];
            visible++;
        }
    }
    printf("Fila %d, Visible desde la izquierda: %d (esperado: %d)\n", row, visible, view_left);
    if (visible != view_left) return 0;

    // Validación desde la derecha
    max = 0;
    visible = 0;
    for (i = SIZE - 1; i >= 0; i--) {
        if (grid[row][i] > max) {
            max = grid[row][i];
            visible++;
        }
    }
    printf("Fila %d, Visible desde la derecha: %d (esperado: %d)\n", row, visible, view_right);
    return visible == view_right;
}

int is_valid_col(int grid[SIZE][SIZE], int col, int view_up, int view_down) {
    int max;
    int visible;
    int i;

    // Validación desde arriba
    max = 0;
    visible = 0;
    for (i = 0; i < SIZE; i++) {
        if (grid[i][col] > max) {
            max = grid[i][col];
            visible++;
        }
    }
    printf("Columna %d, Visible desde arriba: %d (esperado: %d)\n", col, visible, view_up);
    if (visible != view_up) return 0;

    // Validación desde abajo
    max = 0;
    visible = 0;
    for (i = SIZE - 1; i >= 0; i--) {
        if (grid[i][col] > max) {
            max = grid[i][col];
            visible++;
        }
    }
    printf("Columna %d, Visible desde abajo: %d (esperado: %d)\n", col, visible, view_down);
    return visible == view_down;
}



int is_valid(int grid[SIZE][SIZE], int views[16], int row, int col, int num) {
    int i;
    int row_full;
    int col_full;

    grid[row][col] = num;

    // Verificar si la fila está completa
    for (i = 0; i < SIZE; i++) {
        if (grid[row][i] == 0)
            break;
    }
    row_full = (i == SIZE);

    // Verificar si la columna está completa
    for (i = 0; i < SIZE; i++) {
        if (grid[i][col] == 0)
            break;
    }
    col_full = (i == SIZE);

    if (row_full && !is_valid_row(grid, row, views[8 + row], views[12 + row])) {
        grid[row][col] = 0; // Restaurar el valor anterior
        return 0;
    }
    if (col_full && !is_valid_col(grid, col, views[col], views[4 + col])) {
        grid[row][col] = 0; // Restaurar el valor anterior
        return 0;
    }

    grid[row][col] = 0; // Restaurar el valor anterior
    return 1;
}



int solve(int grid[SIZE][SIZE], int views[16]) {
    int row;
    int col;
    int num;

    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {
            if (grid[row][col] == 0) {
                for (num = 1; num <= SIZE; num++) {
                    printf("Intentando con num: %d en row: %d, col: %d\n", num, row, col);
                    if (is_valid(grid, views, row, col, num)) {
                        grid[row][col] = num;
                        if (solve(grid, views)) {
                            return 1;
                        }
                        grid[row][col] = 0;
                    }
                }
                return 0;
            }
        }
    }
    return 1;
}



