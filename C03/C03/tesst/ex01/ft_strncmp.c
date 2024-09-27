/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:33:39 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/10 17:33:45 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while ((s1[cont] || s2[cont]) && (cont < n))
	{
		if (s1[cont] != s2[cont])
			return (s1[cont] - s2[cont]);
		cont++;
	}
	return (0);
}
