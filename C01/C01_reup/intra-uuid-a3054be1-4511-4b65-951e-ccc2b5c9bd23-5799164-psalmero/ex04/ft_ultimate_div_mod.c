/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:25:56 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/07 20:36:37 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	save;

	save = *a;
	*a = *a / *b;
	*b = save % *b;
}
/*
int	main()
{
	int	a = 42;
	int	b = 5;
	
	printf("Antes de ft_ultimate_div_mod: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Después de ft_ultimate_div_mod: a = %d, b = %d\n", a, b);

	return (0);
}*/
