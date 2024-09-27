/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:48:35 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/16 21:48:37 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cont;

	cont = 0;
	if (argc != 0)
	{
		while (argv[0][cont] != '\0')
		{
			write(1, &argv[0][cont], 1);
			cont++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
