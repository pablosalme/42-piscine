/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 04:24:00 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/07 04:42:02 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
void ft_putnbr(int nb)
{
	char	c;
	if(nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main()
{
	int	x;
	int	y;
	int	division;
	int	resto;

	x = 20;
	y = 10;
	
	ft_div_mod(x, y, &division, &resto);

	ft_putnbr(division);
	write(1, "\n", 1);
	ft_putnbr(resto);
	write(1, "\n", 1);

	return (0);
}*/
