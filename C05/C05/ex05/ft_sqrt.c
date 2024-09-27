/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 23:29:11 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/15 23:29:14 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	left;
	int	mid;
	int	right;

	left = 1;
	right = nb;
	mid = 0;
	if (nb <= 0)
		return (0);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid < nb / mid)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}
/*
int	main()
{
	int	num = ft_sqrt(9);
	printf("%d", num);
	return (0);
}*/
