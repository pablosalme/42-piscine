/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:19:17 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/10 19:19:19 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cont;
	unsigned int	cont_len;

	cont_len = 0;
	cont = 0;
	while (dest[cont_len])
	{
		cont_len++;
	}
	while ((src[cont] != '\0') && (cont < nb))
	{
		dest[cont_len + cont] = src[cont];
		cont++;
	}
	dest[cont_len + cont] = '\0';
	return (dest);
}
