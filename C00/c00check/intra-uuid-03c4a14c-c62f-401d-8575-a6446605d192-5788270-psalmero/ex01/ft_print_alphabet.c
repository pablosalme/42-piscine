/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:22:47 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/06 19:01:08 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	ch;
	int		cont;

	ch = 'a';
	cont = 0;
	while (cont <= 25)
	{
		write(1, &ch, 1);
		ch++;
		cont++;
	}
}
