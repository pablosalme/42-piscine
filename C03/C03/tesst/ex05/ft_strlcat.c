/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalmero <psalmero@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 22:04:48 by psalmero          #+#    #+#             */
/*   Updated: 2024/07/11 22:04:51 by psalmero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	j = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		src_len += size;
	else
		src_len += dest_len;
	while (src[j] != '\0' && (dest_len + 1) < size)
	{
		dest[dest_len] = src[j];
		dest_len++;
		j++;
	}
	dest[dest_len] = '\0';
	return (src_len);
}
