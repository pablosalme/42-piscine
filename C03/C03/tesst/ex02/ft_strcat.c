/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:49:33 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/10 18:49:36 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	cont;
	int	cont_len;

	cont_len = 0;
	cont = 0;
	while (dest[cont_len])
	{
		cont_len++;
	}
	while (src[cont] != '\0')
	{
		dest[cont_len + cont] = src[cont];
		cont++;
	}
	dest[cont_len + cont] = '\0';
	return (dest);
}
