/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:02:26 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/14 16:02:29 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// calling functions in the other file (skyscraper.c)
int		*analyze_input(char *str);
void	start_grid(int grid[4][4]);
int		check_place(int grid[4][4], int row, int col, int num);
void	print_grid(int grid[4][4]);

int	main(int argc, char **argv)
{
	int	*array_ints;
	int	grid[4][4];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	array_ints = analyze_input(argv[1]);
	if (array_ints == NULL)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	start_grid(grid);
	write(1, "Grid initialized to zeros:\n", 27);
	print_grid(grid);
	free(array_ints);
	return (0);
}
