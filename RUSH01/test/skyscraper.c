/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper_solver.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:39:20 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/14 13:39:23 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// convert string input to ints array
int	*analyze_input(char *str)
{
	int	*array_ints;
	int	cont;

	array_ints = malloc(16 * 4);
	if (array_ints == NULL)
		return (0);
	cont = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= '4')
		{
			array_ints[cont] = *str - '0';
			cont++;
		}
		str++;
	}
	return (array_ints);
}

// start grid fully 0
void	start_grid(int grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
}

// check if a number can be place in a position
int	check_place(int grid[4][4], int row, int col, int num)
{
	int	cont;

	cont = 0;
	while (cont < 4)
	{
		if (grid[row][cont] == num || grid[cont][col] == num)
		{
			return (0);
		}
		cont++;
	}
	return (1);
}

// convert int to str to print on print grid function
void	int_to_str(int num, char *str)
{
	str[0] = num + '0';
	str[1] = ' ';
	str[2] = '\0';
}

// print grid
void	print_grid(int grid[4][4])
{
	char	str[3];
	int		row;
	int		col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			int_to_str(grid[row][col], str);
			write(1, str, 2);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
