/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:33:11 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/06 19:02:48 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;
	int		cont;

	num = '0';
	cont = 0;
	while (cont < 10)
	{
		write(1, &num, 1);
		num++;
		cont++;
	}
}
