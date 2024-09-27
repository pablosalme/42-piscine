/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:23:12 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/06 18:05:32 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	prnt_line(int x, char frst, char mid, char lst)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar(frst);
		}
		else if (i == x - 1)
		{
			ft_putchar(lst);
		}
		else
		{
			ft_putchar(mid);
		}
		i++;
	}
	ft_putchar('\n');
}

void	prnt_mid(int x, int y)
{
	int	j;
	int	i;

	j = 0;
	while (j < y - 2)
	{
		i = 0;
		while (i < x)
		{
			if (i == 0 || i == x - 1)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR", 5);
	}
	else
	{
		prnt_line(x, 'A', 'B', 'C');
		prnt_mid(x, y);
		prnt_line(x, 'A', 'B', 'C');
	}
}
