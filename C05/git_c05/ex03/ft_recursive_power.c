/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:37:52 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/15 22:37:57 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

int	main()
{
	int	result = ft_recursive_power(0, 3);
	int	result2 = ft_recursive_power(0, 0);
	int	result3 = ft_recursive_power(0, 10);
	printf("%d", result);
	printf("%d", result2);
	printf("%d", result3);
}